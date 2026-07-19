#include "CLIView.h"
#include "InputHandler.h"

// cliview onstructor implementation
CliView::CliView(Usermanager &usermanager, MaxHeap &maxheap)
    : usermanager(usermanager), maxheapview(maxheap) {}

// print main menu method implementation
void CliView::PrintMainMenu()
{
    std::cout << " ====================== welcome to this game ======================\n";
    std::cout << " >> please select an option\n";
    std::cout << " >>> 1: crate a new user\n";
    std::cout << " >>> 2: login\n";
    std::cout << " >>> 3: Show leaderboard\n"; // to display all users by rating. Not just the top player.
    std::cout << " >>> 4: Print score of desired user\n";
    std::cout << " >>> 5: exit\n";
}

// print score method implementation
void CliView::PrintScore()
{
    // ask the User to use which to search in the players
    int searchmode;
    std::cout << ">> please select an mode:\n"
              << ">>> 1: Linear Search\n"
              << ">>> 2: or BST Search\n";
    cin >> searchmode;

    if (inputhandler != nullptr)
    {
        inputhandler->ScoreUser(searchmode);
    }
    else
    {
        std::cout << "<<<< InputHandler is not connected to this view yet.\n";
    }
}

// print leader board method implementation
void CliView::PrintLeaderboard()
{
    // variables to store the top player
    pair<string, long int> maxuser;
    maxuser = maxheapview.getTop();
    std::cout << "> Top Player: " << maxuser.first << "\n> Score = " << maxuser.second << endl;
}

// get colored node method implementation
string CliView::GetColorNode(char currentNode, char playerpos, char wolfpos)
{
    // check the player and wolf positions
    if (currentNode == playerpos && currentNode == wolfpos)
    {
        return YELLOW + "(" + currentNode + ")" + RESET;
    }
    else if (currentNode == playerpos)
    {
        return RED + "(" + currentNode + ")" + RESET;
    }
    else if (currentNode == wolfpos)
    {
        return BLUE + "(" + currentNode + ")" + RESET;
    }
    return WHITE + "(" + currentNode + ")" + RESET;
}

// display graph method implementation
void CliView::displayGraph(char playerpos, char wolfpos, const string &username, long int score)
{
    std::cout << "\033[2J\033[H";

    std::cout << "======================== HOOD QUEST MAP ========================\n";
    std::cout << " " << RED << "[Red Riding Hood: " << playerpos << "]" << RESET
              << "  " << BLUE << "[Wolf: " << wolfpos << "]" << RESET
              << "  Username: " << YELLOW << username << RESET << "   Score: " << YELLOW << score << RESET << "\n";
    std::cout << "================================================================\n\n";

    std::cout << "     " << GetColorNode('B', playerpos, wolfpos) << "----------2----------" << GetColorNode('C', playerpos, wolfpos) << "----------5----------" << GetColorNode('D', playerpos, wolfpos) << "\n";
    std::cout << "      /                                                \\\n";
    std::cout << "     3                                                  1\n";
    std::cout << "    /                                                    \\\n";
    std::cout << " " << GetColorNode('A', playerpos, wolfpos) << "-------6------" << GetColorNode('F', playerpos, wolfpos) << "---------4----------" << GetColorNode('G', playerpos, wolfpos) << "-------3------" << GetColorNode('E', playerpos, wolfpos) << "\n";
    std::cout << "                  /                      |  \\\n";
    std::cout << "                 6                       5   4\n";
    std::cout << "                /                        |    \\\n";
    std::cout << "              " << GetColorNode('J', playerpos, wolfpos) << "-----3-----" << GetColorNode('K', playerpos, wolfpos) << "----2----" << GetColorNode('W', playerpos, wolfpos) << "-3-" << GetColorNode('M', playerpos, wolfpos) << "\n";
    std::cout << "               \\              \\               /\n";
    std::cout << "                5              3             1\n";
    std::cout << "                 \\              \\           /\n";
    std::cout << "   " << GetColorNode('O', playerpos, wolfpos) << "-----3-----" << GetColorNode('P', playerpos, wolfpos) << "-----1-----" << GetColorNode('R', playerpos, wolfpos) << "---2---" << GetColorNode('S', playerpos, wolfpos) << "\n";
    std::cout << "     \\                          |          \\\n";
    std::cout << "      2                         4           6\n";
    std::cout << "       \\                        |            \\\n";
    std::cout << "       " << GetColorNode('Q', playerpos, wolfpos) << "-----------5---------" << GetColorNode('T', playerpos, wolfpos) << "-----2-----" << GetColorNode('U', playerpos, wolfpos) << "\n";
    std::cout << "         \\                                    /\n";
    std::cout << "          5                                  3\n";
    std::cout << "           \\                                /\n";
    std::cout << "            \\--------------" << GetColorNode('V', playerpos, wolfpos) << "-------------/\n\n";
    std::cout << "================================================================\n";
}