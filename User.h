#ifndef User_h
#define User_h
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Category
{
  vector <string> type;
  vector <double> value;
};

class User
{
  public:
    User();
    void readFromFile();
    void writeToFile();
    void display_expense_status();
    void expenseMenu();
    void manageExpense();
    void display_income_status();
    void incomeMenu();
    void manageIncome();
    void viewRecordsMenu();
    void viewRecords();
    void manageBudget();
    void accountsMenu();
    void display_accounts_status();
    void manageAccounts();
    void transferAmount();
    void statsMenu();
    void viewStats();
    void display_main_menu();
    void coordinate_input(int);

    string username;
    double budget;
    vector <string> expense_date;
    vector <string> income_date;
    Category accounts, expense, income;
};

#endif