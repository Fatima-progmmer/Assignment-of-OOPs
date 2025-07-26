#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	int grade, age, type, OTP;
	string dep, email, password, CNIC, profession, ci_name, qualification, ph_num, live ;
	char name[50], father_name[50];
	  char feedback[500],k[50];
	char citizen;
	ifstream S_S("feedback_book.txt");
	ofstream S_W("feedback_book.txt", ios::app);
	cout << "\n\n\t~~~~Welcome in My new software application~~~~" << endl;
	cout << "\n\n\n\t---------------------------------" << endl;
	cout << "\tYou have to create a new account " << endl;
	cout << "\t---------------------------------" << endl;
	cout << "\n\nEmail address : ";
	cin >> email;
	cout << "Enter password : ";
	cin >> password;
	cout << "Enter OTP you received :  ";
	cin >> OTP;
	cout << "\n\n\t*^*^*^*^* PERSONAL INFORMATION *^*^*^* " << endl;
	cout << "\t•••••••••••••••••••••••••••••••••••••••" << endl;
	cout << "\n✓ Your real name :";
	cin.getline(name, 50);
	cout << "✓ Your father name :";
	cin.getline(father_name, 50);
	cout << "✓ Are you citizen of Kashmir (y/n:) ";
	cin >> citizen;
	cout << "✓ Your age :";
	cin >> age;
	if ((citizen == 'y')&& (age >= 18))
	{
		cout << "✓ Your city name :";
		cin >> ci_name;
		cout << "✓ Your CNIC number :";
		cin >> CNIC;
		cout << "✓ Your profession : ";
		cin >> profession;
		cout << "✓ Your Qualification : ";
		cin >> qualification;
		cout << "✓ Your phone number : ";
		cin >> ph_num;
		cout << "✓ Which area you  belonged :";
		cin >> live;
		cout << "\n\n\t``````` Thanks for your information ````````" << endl;
		cout << "\t\tYour account are successful created !🥰";
		cout << "\n\t^^^ Please login into your account ^^^";
		cout << "\nEnter your saved password on  " << email << ": \n";
		cin.getline(k,50);
		while(k != password)
		{
			cout << "\n\tWrong password ! ";
			cout << "\n\tAgain enter a password :  ";
			cin >> k;
		}
		if (k == password)
		{
		cout << "\n\t\t login successfully";
			cout << "\n\t`````CITIZEN TYPE``````";
			cout << "\n\n\t1-I am here to announce a new rule .\n\t2-I am here to give feedback\n\tYour choice : ";
			cin >> type;

			switch (type)
			{
			case 1:
			{
				cout << "Which department are you belonged : ";
				cin >> dep;
				cout << "What is your job grade : ";
				cin >> grade;
				if(grade<=15)
				{
					cout << "\n\n\n\t\t Sorry you has not a enough scale to announce a new order !";
					S_W << "\t---------------------------------" << endl;
					S_W << "\n\t\tRECTION \t ";
					S_W << "\n\t\t " << name << "has not enough scale to announce A new rule ";
					S_W << "\nCNIC\t  " << CNIC << "\nDepartment \t" << dep<< "\nScale \t " << grade;
				}
				else
				{
				cout << " \n\n\t\t^^ WRITE YOUR ANNOUNCEMENT ^^ \n";
				cin.getline(feedback, 500);
				cout <<"\n\n\t Be patience in few minutes you received a feedback on this announcement !" <<endl;
				S_W << "\n\t\t " << name << " Announcement " << endl;
				S_W << "\t---------------------------------" << endl;
				S_W << email << " :\n\t\t" << feedback << endl;
				S_W << "\n\t\t~~~personal information~~~ ";
				S_W << "\n"<< name << " of father is " << father_name << " has a belonged from the " << ci_name << live << name << " has age " << age << " and CNIC number "<< "she /he are " << qualification << " passed and now work as a  " << profession << " on the department " << dep << "has" << grade << " scale "<< ".We can contact him/her number " << ph_num << endl;
				}
				break;
			}
			case 2:
			{
				cout << "\n\n\n \tDear " << name
					 << "  You are the respectful citizens of the country .please give feedback about the government dicision .your feedback can help us to improve our work and make a new beneficial dicision ." << endl;
				cout << " \n\n\t\t^^ WRITE YOUR FEEDBACK ^^ \n";
				cin.getline(feedback, 500);
				cout << "\n\n\tThanks for your feedback and information ";	
				S_W << "\n\n\t---------------------------------" << endl;
				S_W << "\n\t\t " << name << " FEEDBACK " << endl;
				S_W << "\t---------------------------------" << endl;
				S_W << email << " :\n\t\t" << feedback << endl;
				S_W << "\n\t\t~~~personal information~~~ ";
				S_W << "\n"<< name << " of father is " << father_name << " has a belonged from the " << ci_name << live << name << " has age " << age << " and CNIC number "<< "she /he are " << qualification << " passed and now work as a  " << profession << ".We can contact him/her number " << ph_num << endl;
				break;
			}
			}
		}
		else
			cout << "\n\tYou entered wrong password !\n" << endl;
	}
else
	{
		cout << "\t\n You are not eligible to add your account !";
		S_W << "\t---------------------------------" << endl;
		S_W << "\n\t " << name << " are no eligible to add his/her account " << endl;
		S_W << "\n\t\t~~~personal information~~~ ";
		S_W << "\n\n"	<< name << " of father is " << father_name << " has not eligible to add her/his feedback because he/she has one or both reason to not able to give feedback.\n\t ✓ He/she is not a citizen of Kashmir. \n\t ✓ He/She has not a required age ." << endl;
	}
	S_W.close();
	return 0;
}