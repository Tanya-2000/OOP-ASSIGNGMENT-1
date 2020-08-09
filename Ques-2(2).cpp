#include<iostream>
#include<string>
using namespace std;

class Account{
public:
  Account(int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
private:
  int accountBalance;
};
Account::Account(int balance)
 {if(balance>=0)
accountBalance=balance;
else{
    accountBalance=0;

    cout<<"initial balance is invalid"<<endl;
}
}
void Account::credit(int balance)
{   accountBalance= accountBalance + balance;
}void Account::debit(int balance)
{
if(accountBalance>=balance){
accountBalance=accountBalance-balance;
}
}else
{
    cout<<"Debit Amount exceeded account";
}int Account::getAccountbalance()
{
return accountBalance;
}
int main()
{
Account Account1(89);
Account Account2(-76);
cout<<"Account's initial balance is invalid";
Account1 .credit(200);
Account2 .credit(34)
cout<<"Account balance is : "<<accountBalance;
Account1 .debit(50);
Account2 .debit(34);
cout<<"Account's balance is: "<<accountBalance;
}
