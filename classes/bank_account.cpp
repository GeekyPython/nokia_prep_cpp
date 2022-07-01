#include<iostream>
#define MAX 100000
using namespace std;

class BankAccount
{
    string name, account_number, account_type;
    int balance;

    public:
        void initialize()
        {
            balance = 0;
            name = "User";
            account_number: "1";
            account_type: "Salary";
        }
        void displayInfo();
        void deposit(int);
        void withdraw(int);
};

void BankAccount::displayInfo()
{
    cout<<"User: "<<name<<endl<<"Balance: "<<balance<<endl;
}   

void BankAccount::deposit(int amount)
{
    if(balance == MAX)
    {
        cout<<"Max balance capacity reached.\n";
    }

    else if(MAX-balance < amount)
    {
        cout<<"Deposit limit exceeded.\n";
    }

    else
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(balance == 0)
    {
        cout<<"Zero balance remaining, please deposit amount to withdraw.\n";
    }

    else if(balance>0 && balance<amount)
    {
        cout<<"Not enough balance to withdraw.\n";
    }

    else
    {
        balance -= amount;
    }
}

int main()
{
    BankAccount account;
    int choice;
    
    account.initialize();

    cout<<"Welcome to your Bank Account Portal\n";

    do
    {
        cout<<"Choose from the below services provided:\n1.Withdraw\n2.Deposit\n3.Show Account Information\n4.Exit\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                int amount;
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                account.withdraw(amount);
            break;

            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                account.deposit(amount);
            break;

            case 3:
                account.displayInfo();
            break;

            case 4:
                choice = 4;
            break;

            default:
                cout<<"Invalid option, please try again\n";
            break;            
        }

    }while(choice!=4);

    

    return 0;
}
