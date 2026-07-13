#include "GameEngine.h"

void Gameengine::GameLoop()
{
    Cliview cli;
    InputHandler input;
    Graph graph;
    // Gamestate gamestate;
    // Move move;
    cli.PrintMainMenu();
    string CurrentUser = input.MainHandler();
    Player player1(CurrentUser, 'a', 0);
    Wolf wolf('d');
    if (CurrentUser != "Exit")
    {
        bool mode;
        while (true)
        {
            cli.displayGraph(player1.getPosition(), wolf.getPosition());
            char CurrentOrder = input.CurrentHandler();
            switch (CurrentOrder)
            {
            case '0':
                cout << "Undo selected\n";
                // gamastate.undo();
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'J':
            case 'K':
            case 'M':
            case 'W':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
                // move.moveplayer(graph ,player ,CurrentOrder);
            default:
                cout << "Invalid order selected\n";
            }
            mode = input.SelectModeofAlghorithms();
            switch (mode)
            {
            case true:
                cout << "Dijkstra selected\n";
                dijkstraPrintPath(graph, player1.getPosition(), CurrentOrder, wolf.getPosition());
                break;
            case false:
                cout << "A* selected\n";
                AStarprintPath(graph, player1.getPosition(), CurrentOrder, wolf.getPosition());
                break;
            default:
                cout << "Invalid mode selected\n";
            }
        }
    }
}