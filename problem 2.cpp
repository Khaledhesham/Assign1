#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person() 
	{ 
		lname = "";
		fname[0] = '\0'; 
	} 
	Person(const string & ln, const char * fn = "Heyyou")
	{
		int length = strlen(fn);
		if (length >= LIMIT)
		{
			length = LIMIT - 1;
		}
		for (int i = 0; i < length; i++)
		{
			fname[i] = fn[i];
		}
		fname[length] = '\0'; 

		lname = ln;
	}
	void Show() const 
	{
		cout << fname <<" "<<lname <<endl;
	}
	void FormalShow() const
	{
		cout << fname << ", " << lname<<endl;
	}
};

void main()
{
	Person one; // use default constructor
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
}