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
void load(const Usermanager &usermanager, const string &file)
{
}