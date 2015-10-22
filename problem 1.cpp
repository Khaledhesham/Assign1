#include <iostream>
#include <string>

using namespace std;

class BankAccount{
private:

	string DepositorName;
	string AccountNumber;
	float Balance;

public:
	BankAccount(string name, float balance);
	void Display();
	void Deposit(float amount);
	void Withdraw(float amount);
};

BankAccount::BankAccount(string name, float balance)
{
	DepositorName = name;
	AccountNumber = "123";
	Balance = balance;
}

void BankAccount::Display()
{
	cout << "Depositor's name is " << DepositorName << " , Account's number is " << AccountNumber << " , Balance is " << Balance << endl;
}

void BankAccount::Deposit(float amount)
{
	if (amount > 0)
	{
		Balance += amount;
		cout << amount << "is deposited successfully" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
}

void BankAccount::Withdraw(float amount)
{
	if (amount < 0)
	{
		cout << "error"<<endl;
	}
	else if (amount > Balance)
	{
		cout << "withdrawal amount is greater than balance"<<endl;
	}
	else
	{
		Balance -= amount;
		cout << amount << "is withdrawn" << endl;
	}

}

void main()
{
	BankAccount x("khaled", 1000);
	x.Display();
	x.Deposit(50);
	x.Display();
	x.Withdraw(1200);
	x.Display();
	x.Withdraw(1000);
	x.Display();
}