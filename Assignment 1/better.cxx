#include <iostream>
using namespace std;
int main()
{
	int OTP;
	string email, password,name;
	char choice;
	cout << "\n\t~~~~Welcome in Ruler administration manager ~~~~" << endl;
	cout << "\n\n\ta- Sign-up in your account \n\t b-login in your account \n\n\tyour choice :";
	cin >> choice;
	switch (choice)
	{
	case 'a':
	{
		cout << "\n\t\tYou have to create a new account " << endl;
		cout << "\tEmail address : ";
		cin >> email;
		cout << "\tEnter password : ";
		cin >> password;
		cout << "\tEnter OTP you received :  ";
		cin >> OTP;
		cout << "\tYour  name :";
		cin >> name;
		cout << "\n\n\n\t\tAccount are created ! " << endl;
	}
	break;
	case 'b':
	{
		cout << "\n\n\tLogin in your account" << endl;
		cout << "\tEnter a email to login ";
		cin >> email;
		cout << "\tEnter a password :";
		cin >> password;
		cout << "\n\t\t login successfully";
	}
	break;
	}
		return 0;
}
					
