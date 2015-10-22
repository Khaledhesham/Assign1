1. What is a class?

A class is a C++ vehicle for translating an abstraction to a user-defined type. It combines data representation and methods for manipulating that data into one neat package.

2. How does a class accomplish abstraction, encapsulation, and data hiding?

A class accomplishes abstraction by showing only relevant data and hiding unnecessary details of an object from the user, accomplishes encapsulation by gathering the implementation details together and separating them from the abstraction ,and it accomplishes data hiding by hiding functional details of an implementation in the private section.

3. What is the relationship between an object and a class?

An object is an instance of a class.

4. In what way, aside from being functions, are class function members different from class data members?

Data members go into the private section and member functions go into the public section.

5. Define a class to represent a bank account. Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:
   n Creating an object and initializing it.
   n Displaying the depositor’s name, account number, and balance
   n Depositing an amount of money given by an argument
   n Withdrawing an amount of money given by an argument
   Just show the class declaration, not the method implementations. 

Class BankAccount {
private:

string DepositorName;
string AccountNumber;
float Balance;

public:
void Create (string name, string account_no, float balance);
void Display ();
void Deposit (float amount);
void Withdraw (float amount);
};

6. When are class constructors called? When are class destructors called?

Class constructors are called when objects are created , class destructors are called when objects are destroyed.

7. Provide code for a constructor for the bank account class from Chapter Review Question 5.

BankAccount (string name, string account_no, float balance)
{
DepositorName = name;
AccountNumber = account_no;
Balance = balance;
}

8. What is a default constructor? What is the advantage of having one?

it is a constructor that is called if the object is created without any information about its data members so it sets is to default values instead of having random values.

9. Modify the Stock class definition (the version in stock20.h) so that it has member functions that return the values of the individual data members. Note:A member that returns the company name should not provide a weapon for altering the array. That is, it can’t simply return a string reference. It could return a const reference.

const string GetCompany ()
{ 
return company;
}

const int GetShares ()
{
return shares;
}

const double GetShareVal ()
{
return share_val;
}

const double GetTotalVal ()
{
return total_val;
}

10. What are this and *this?

this is a pointer to the direct object but *this is a reference to a clone of the object 