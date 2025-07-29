// Bank Teller System
#include <iostream>
using namespace std;
class Bank {
    int AccountNo;
    string name, city;
    char acc_type;
    float balance;
    int status; //1 active  2 not active
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void Bank::open_account()
{
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your address: ";
    cin >> city;
    cout << "What type of account you want"
         << " to open saving(S) or Current(C): ";
    cin >> acc_type;
    cout << "Enter how much money you want to start your account with: ";
    cin >> balance;
    cout << "Account Created Successfully with starting ballance: " <<balance;
}
// Function to deposit the account
void Bank::deposit_money()
{
    int Amount;
    cout << "Enter how much money you want to deposit: ";
    cin >> Amount;
    balance += Amount;
    cout << "\n Available Balance: " << balance;;
}
void Bank::withdraw_money()
{
    float amount;
    cout << "Enter how much money you want to withdraw: ";;
    cin >> amount;
    balance -= amount;
    cout << "\n Available balance: " << balance;
}
void Bank::display_account()
{
    cout << "Name: " << name << "  Address: " << city
            << "  Type: " << acc_type << "  Balance: " << balance << endl;
}

int main()
{
    int choice;
    int size = 3;
    int index = 0;
    Bank MyAccount[size];
    while ( choice != 99) { // 99 stop
 cout << "\n\n";
        cout << "\t Bank Account Operations \n\n" << endl;
        cout << "\t Please enter a number (1-4) for a function, 99 to exit \n\n";
        cout << "\t   1. Open New Account. \n" ;
        cout << "\t   2 Deposit. \n" ;
        cout << "\t   3 Withdrew. \n ";
        cout << "\t   4 Display account information. \n";
        cout << "\n\t  ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Open New Account.\n";
                index++;
                cout << "Account #: " << index << endl;
                MyAccount[index].open_account();
                cout << "\n-------------------------------------------------\n";
                break;
            case 2:
                cout << "\nDeposit account \n\n";
                MyAccount[index].deposit_money();
                cout << "\n-------------------------------------------------\n";
                break;
            case 3:
                cout << "\nWithdraw money \n\n";
                MyAccount[index].withdraw_money();
                cout << "\n-------------------------------------------------\n";
                break;
            case 4:
                cout << "\nDisplay account information.\n\n";
                for (int i=1; i<=size; i++) MyAccount[i].display_account();
            default:
                cout << "\n\t  Exit the program\n";
        }
    }
    return 0;
}
