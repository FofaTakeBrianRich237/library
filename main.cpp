#include "account.h"
#include<fstream>

using std::cout;
using std::endl;
using std::cin;

int Costumer::NumberofCostumers = 0;
int User::NumUsers = 0;
int SimpleUser::NumSimpleUsers = 0;
int AdminUser::NumAdminUsers = 0;


vector<string> Costumer::UnusedCId;
vector<string> SimpleUser::UnusedSUID;
vector<string> AdminUser::UnusedAUID;


int main()
{

    InitialiseAdminUserList();
    InitialiseSimpleUserList();
    InitialiseCostumerList();
    DisplayAllAdminUsers();
    DisplayAllSimpleUsers();
    DisplayAllCostumer();

    
    return 0;
    
}