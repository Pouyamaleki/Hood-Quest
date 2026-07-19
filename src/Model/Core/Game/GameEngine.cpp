#include "GameEngine.h"
#include "SaveLoadManager.h"

// Game Loop method implementation
void gameEngine::GameLoop()
{
    // clear the Terminal before the Game Start
    system("cls");

    // use the file checker function
    if (!fileChecker())
    {
        cerr << "<<<< Save file could not be created.\n";
        return;
    }

    Usermanager usermanager;

    // load every data from save.txt file
    load(usermanager, "..\\src\\Controller\\save.txt");

    BST &bst = usermanager.GetBST();
    MaxHeap &maxheap = usermanager.GetMaxHeap();

    CliView cli(usermanager, maxheap);
    InputHandler input(usermanager, bst, cli);
    cli.SetInputHandler(input);

    Move move;
    Graph graph;
    Stack stack;

    Dijkstra dijkstra;
    AStar astar;

    string CurrentUser = input.MainHandler();

    Player player(CurrentUser, 'a');
    Wolf wolf('d');
    GameState gamestate(player, wolf);

    if (CurrentUser != "Exit")
    {
        bool mode;
        vector<char> path;
        // main game loop
        while (true)
        {
            // show the graph and get the input from the User
            cli.displayGraph(player.getPosition(), wolf.getPosition(), CurrentUser, player.getScore());
            mode = input.SelectModeofAlghorithms();
            switch (mode)
            {
            // first case for the dijkstra algorithm
            case true:
                cout << "> Dijkstra selected\n";
                dijkstra.dijkstraPrintPath(graph, player.getPosition(), 'V', wolf.getPosition());
                path = dijkstra.getPath();
                break;
            // second case for the A* algorithm
            case false:
                cout << "> A* selected\n";
                astar.AStarprintPath(graph, player.getPosition(), 'V', wolf.getPosition());
                path = astar.getPath();
                break;
            }
            // create the current order to get the inputs from the player
            string CurrentOrder = input.CurrentHandler();
            if (CurrentOrder == "UNDO")
            {
                // if the stack is empty show an error massage 
                if (stack.isEmpty())
                {
                    cerr << "<<<< You have not done any move in the game \n";
                }
                // if the stack is not empty complete the undo
                else
                {
                    cout << "> Undo selected\n";
                    gamestate.undo(player, wolf, stack);
                }
            }
            // check the Node that the player entered
            else if (CurrentOrder == "A" || CurrentOrder == "B" || CurrentOrder == "C" || CurrentOrder == "D" ||
                     CurrentOrder == "E" || CurrentOrder == "F" || CurrentOrder == "G" || CurrentOrder == "J" ||
                     CurrentOrder == "K" || CurrentOrder == "M" || CurrentOrder == "W" || CurrentOrder == "O" ||
                     CurrentOrder == "P" || CurrentOrder == "Q" || CurrentOrder == "R" || CurrentOrder == "S" ||
                     CurrentOrder == "T" || CurrentOrder == "U" || CurrentOrder == "V")
            {
                // push the player and wolf position in to the stack
                stack.push(player.getPosition(), wolf.getPosition());
                // if section to check the player movment
                if (move.movePlayer(graph, player, wolf, CurrentOrder[0], path))
                {
                    // move the wolf if the dice result is even
                    move.moveWolf(graph, wolf, player);

                    // id condition that check the game finishers
                    if (gamestate.reachedDestination(player) || gamestate.wolfBlock(player, wolf))
                    {
                        // show the finall graph
                        cli.displayGraph(player.getPosition(), wolf.getPosition(), CurrentUser, player.getScore());

                        cout << "> game is finish.\n";
                        int idx = usermanager.SearchUser(CurrentUser);
                        long int newscore = player.getScore() + usermanager.GetUserScore(idx);

                        // save the score in user manager, BST and max heap
                        usermanager.SetUserScore(CurrentUser, newscore);
                        bst.updateScore(CurrentUser, newscore);
                        maxheap.updateScore(CurrentUser, newscore);

                        save(usermanager, "..\\src\\Controller\\save.txt");

                        cli.PrintLeaderboard();
                        return;
                    }

                    cout << "> The move was successful.\n";
                }
            }
            // exit the game if the player entered exit
            else if (CurrentOrder == "EXIT")
            {
                int idx = usermanager.SearchUser(CurrentUser);
                long int newscore = player.getScore() + usermanager.GetUserScore(idx);

                usermanager.SetUserScore(CurrentUser, newscore);
                bst.updateScore(CurrentUser, newscore);
                maxheap.updateScore(CurrentUser, newscore);

                save(usermanager, "..\\src\\Controller\\save.txt");

                cout << "===========Game state saved successfully===========\n";
                cout << "==================Exiting the game=================\n";
                return;
            }
            else
            {
                cout << "<<<< Invalid order selected\n";
            }
        }
    }
}