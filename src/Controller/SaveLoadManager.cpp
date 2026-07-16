#include "SaveLoadManager.h"

void save(const Usermanager &usermanager, const string &file)
{
    ofstream ofs(file);

    for (int i = 0; i < usermanager.Users.size(); i++)
    {
        ofs << usermanager.Users[i].getUsername() << "\n";
        ofs << usermanager.Users[i].getPassword() << "\n";
        ofs << usermanager.Users[i].getCurrentScore() << "\n";
    }

    cout << "Data Saved Successfully!" << endl;
}

void load(Usermanager &usermanager, const string &file)
{
    ifstream ifs(file);

    usermanager.Users.clear();
    usermanager.Numofuser = 0;

    string username;
    size_t password;
    long int score;

    while (ifs >> username >> password >> score)
    {
        User user(username, password);
        user.SetScore(score);
        usermanager.Users.push_back(user);
        usermanager.increaseNumofUser();
    }

    cout << "Data Loaded Successfully!" << endl;
}