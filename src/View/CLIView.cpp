#include "Cliview.h"

void Cliview::PrintMainMenu()
{
    cout << " ========== welcome to this game ==========\n";
    cout << " please select an option:\n";
    cout << " crate a new user: 1\n";
    cout << " login: 2\n";
    cout << " Show leaderboard: 3\n"; // to display all users by rating. Not just the top player.
    cout << " Print score of desired user: 4\n";
    cout << " exit: 5\n";
}

void Cliview::PrintScore(string username) // display the score of a desired player with linear search or BST DataType
{
    int searchmode;
    cout << "please select an mode: Linear Search (1) or BST Search (2)\n";
    cin >> searchmode;
    switch (searchmode)
    {
    case 1:
    {
        int idx, finalscore;
        idx = usermanager.SearchUser(username);
        finalscore = usermanager.GetUserScore(idx);
        cout << "Score of " << username << ": " << finalscore << endl;
        break;
    }
    case 2:
    {
        BSTNode *foundNode = bstview.search(username);
        if (foundNode != nullptr)
        {
            cout << "Score of " << username << ": " << foundNode->score << endl;
        }
        else
        {
            cout << username << " was not found in BST.\n";
        }
        break;
    }
    default:
    {
        cout << "Invalid mode selected. Defaulting to Linear Search.\n";
        break;
    }
    }
}

void Cliview::PrintLeaderboard()
{
    pair<string, long int> maxuser;
    maxuser = maxheapview.getTop();
    cout << " The name of top user is " << maxuser.first << "and its score: " << maxuser.second << endl;
}

string Cliview::GetColorNude(char currentNude, char playerpos, char wolfpos)
{
    if (currentNude == playerpos)
    {
        return RED + "(" + currentNude + ")" + RESET;
    }
    else if (currentNude == wolfpos)
    {
        return BLUE + "(" + currentNude + ")" + RESET;
    }
    return WHITE + "(" + currentNude + ")" + RESET;
}

void Cliview::displayGraph(char playerpos, char wolfpos)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    cout << "====================== HOODQUEST MAP ======================\n";
    cout << "  " << RED << "[Red Riding Hood: " << playerpos << "]" << RESET
         << "   " << BLUE << "[Wolf: " << wolfpos << "]" << RESET << "\n";
    cout << "===========================================================\n\n";

    cout << "         " << GetColorNude('B', playerpos, wolfpos) << " -------- 2 -------- " << GetColorNude('C', playerpos, wolfpos) << " -------- 5 -------- " << GetColorNude('D', playerpos, wolfpos) << "\n";
    cout << "       //                                                               \\\n";
    cout << "      /3                                                                 1\n";
    cout << "     //                                                                   \\\n";
    cout << " " << GetColorNude('A', playerpos, wolfpos) << " -------------- 6 ------------- " << GetColorNude('F', playerpos, wolfpos) << " ----------- 4 ----------- " << GetColorNude('G', playerpos, wolfpos) << " ----------- 3 ----------- " << GetColorNude('E', playerpos, wolfpos) << "\n";
    cout << "                                     //                            |             \\\n";
    cout << "                                    /6                             5              4\n";
    cout << "                                   //                              |               \\\n";
    cout << "                           " << GetColorNude('J', playerpos, wolfpos) << " ----- 3 ----- " << GetColorNude('K', playerpos, wolfpos) << " ----- 2 ----- " << GetColorNude('W', playerpos, wolfpos) << " ----- 3 ----- " << GetColorNude('M', playerpos, wolfpos) << "\n";
    cout << "                            \\              \\                                      /\n";
    cout << "                             5              3                                    1\n";
    cout << "                              \\              \\                                  /\n";
    cout << "   " << GetColorNude('O', playerpos, wolfpos) << " ----- 3 ----- " << GetColorNude('P', playerpos, wolfpos) << " ----- 1 ----- " << GetColorNude('R', playerpos, wolfpos) << " ----------- 2 ----------- " << GetColorNude('S', playerpos, wolfpos) << "\n";
    cout << "     \\                                       |                                    \\\n";
    cout << "      2                                      4                                     6\n";
    cout << "       \\                                     |                                      \\\n";
    cout << "       " << GetColorNude('Q', playerpos, wolfpos) << " ----------------- 5 ---------------- " << GetColorNude('T', playerpos, wolfpos) << " ----------- 2 ----------- " << GetColorNude('U', playerpos, wolfpos) << "\n";
    cout << "         \\                                                                        /\n";
    cout << "          5                                                                      3\n";
    cout << "           \\                                                                    /\n";
    cout << "            \\--------------------------------- " << GetColorNude('V', playerpos, wolfpos) << " --------------------------/\n\n";
    cout << "===========================================================\n";
}