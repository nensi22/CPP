// multiple inheritence with or without switch
// in bank project
// (saving account,current account = base class)
// (User1 = derived class)
#include <iostream>
#include <string>
using namespace std;
class Saving // base class
{
private:
    int savingBalance;

public:
    Saving(int s_amt)
    {
        savingBalance = s_amt;
    }

    void saving_deposit(int);
    void saving_withdraw(int);
    int showSavingBalance()
    {
        return savingBalance;
    }
};
class Current // base class
{
    int currentBalance;

public:
    Current(int c_amt)
    {
        currentBalance = c_amt;
    }

    void current_deposite(int);
    void current_withdraw(int);
    int showCurrentBalance()
    {
        return currentBalance;
    }
};
class User : public Current, public Saving
{
    string name;
    int mobile;

public:
    User(string name, int sAmt, int cAmt) : Saving(sAmt), Current(cAmt)
    {
        this->name = name;
    }
    void dataprint(int);
};
// Saving::Saving()
// {
//     savingBalance = 1000;
// }

void Saving::saving_deposit(int depo)
{
    savingBalance += depo;
}
void Saving::saving_withdraw(int withd)
{
    savingBalance -= withd;
}

// Current::Current()
// {
//     currentBalance = 10000;
// }

void Current::current_deposite(int depo)
{
    currentBalance += depo;
}
void Current::current_withdraw(int withd)
{
    currentBalance -= withd;
}

int main()
{
    User u1("Paresh", 1500, 15000);
    int n, bal = 10000, depo, withd, bala = 20000, acno;
    cout << "\n current Balance" << u1.showCurrentBalance();
    cout << "\n saving Balance" << u1.showSavingBalance();

    // u1.saving_deposit(2500);
    // cout << "\n saving Balance" << u1.showSavingBalance();

    // u1.current_deposite(25000);
    // cout << "\n current Balance" << u1.showCurrentBalance();
    // do
    // {
    //     int s;
    //     cout << "\n\n ENTER : ";
    //     cin >> n;
    //     switch (n)
    //     {
    //         if (n = 1)
    //         {
    //         case 1:
    //             cout << "\n SAVING ACCOUNT"
    //                  << "\n";
    //             cout << "\n Available balance in saving Account : " << bal;
    //             do
    //             {
    //                 cout << "\n Enter savingAc choice: ";
    //                 cin >> s;
    //                 switch (s)
    //                 {
    //                 case 4:
    //                     cout << "\n Dposite : ";
    //                     cin >> depo;
    //                     cout << "\n";
    //                     u1.deposite(depo);
    //                     break;
    //                 case 5:
    //                     cout << "\n withdraw : ";
    //                     cin >> withd;
    //                     u1.withdraw(withd);
    //                     break;
    //                 case 9:
    //                     cout << "\n";
    //                     if (withd > bal) // withd=withdraw, depo=deposite, s=total balance
    //                     {
    //                         cout << "\n Limit over";
    //                     }
    //                     else
    //                     {
    //                         cout << "\n Total available balance in saving ac. : " << bal;
    //                     }
    //                     u1.calc();
    //                     break;
    //                 case 10:
    //                     cout << "\n Exit Saving Account";
    //                     break;
    //                 default:
    //                     cout << "\n Wrong";
    //                     break;
    //                 }
    //             } while (s != 10);
    //             break;
    //         }
    //         else if (n = 2)
    //         {
    //         case 2:
    //             cout << "\n CURRENT ACCOUNT"
    //                  << "\n";
    //             cout << "\n Available balance in current Account : " << bala;
    //             do
    //             {
    //                 cout << "\n Enter CurrentAc choice: ";
    //                 cin >> s;
    //                 switch (s)
    //                 {
    //                 case 4:
    //                     cout << "\n Dposite : ";
    //                     cin >> depo;
    //                     cout << "\n";
    //                     u1.deposite1(depo);
    //                     break;
    //                 case 5:
    //                     cout << "\n withdraw : ";
    //                     cin >> withd;
    //                     u1.withdraw1(withd);
    //                     break;
    //                 case 9:
    //                     cout << "\n";
    //                     if (withd > bala) // withd=withdraw, depo=deposite, s=total balance
    //                     {
    //                         cout << "\n Limit over";
    //                     }
    //                     else
    //                     {
    //                         cout << "\n Total available balance in current ac. : " << bala;
    //                     }
    //                     u1.calc1();
    //                     break;
    //                 case 10:
    //                     cout << "\n Exit Current Account";
    //                     break;
    //                 default:
    //                     cout << "\n Wrong";
    //                     break;
    //                 }
    //             } while (s != 10);
    //             break;
    //         }
    //     case 11:

    //         cout << "\n ACCOUNT NO: ";
    //         cin >> acno;
    //         u1.dataprint(acno);

    //         cout << "\n SAVING ACCOUNT BALANCE : " << bal;
    //         u1.calc();
    //         cout << "\n CURRENT ACCOuNT BALANCE : " << bala;
    //         u1.calc1();
    //         break;
    //     case 0:
    //         cout << "\n EXIT ALL";
    //         break;
    //     default:
    //         cout << "\n WRONG";
    //         break;
    //     }
    // } while (n != 0);
}