#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	int grade, age, type, OTP, choice;
	string dep, email, password, CNIC, profession, ci_name, qualification, ph_num, live;
	char mil={'@','g','m','a','i','l','.','c','o','m'};
	char name[50],mail[12];
	char feedback[500], k[50];
	char citizen;
	ifstream S_S("ruler_book.txt");
	ofstream S_W("ruler_book.txt", ios::app);
	cout << "\n\t~~~~Welcome in Ruler administration manager ~~~~" << endl;
			cout << "\n\n\t\t---------------------------------" << endl;
			cout << "\t\tYou have to create a new account " << endl;
			cout << "\t\t---------------------------------" << endl;
			cout << "\n\nEmail address : ";
			cin >> email;
			cout << "Enter password : ";
			cin >> password;
			cout << "Enter OTP you received :  ";
			cin >> OTP;
			cout << "\nplease fill this document about your personal information " << endl;
			cout << "\t*****************************************" << endl;
			cin.clear();
			cout << "\n Your real name :";
			cin >> name;
			cin.clear();
			cout << " \nAre you citizen of Kashmir (y/n:) ";
			cin >> citizen;
			cout << " Your age :";
			cin >> age;
			if ((citizen == 'y') && (age >= 18))
			{
				cout << " Your city name :";
				cin >> ci_name;
				cout << " Your CNIC number :";
				cin >> CNIC;
				cout << " Your profession : ";
				cin >> profession;
				cout << " Your Qualification : ";
				cin >> qualification;
				cout << " Your phone number : ";
				cin >> ph_num;
				cout << " Which area you  belonged :";
				cin >> live;
				cout << "\n\n\t``````` Thanks for your information ````````" << endl;
				cout << "\t\t\nYour account are successful created !";
				cin.clear();
				cout << "\nLogin into your account Enter a password : ";
				cin >> k;
				while (k != password)
				{
					cout << "\n\tWrong password ! " << endl;
					cout << "\n\tAgain Enter a password :  ";
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
						cin.clear();
						if (grade <= 15)
						{
							cout << "\n\n\n\t\t Sorry you has not a enough scale to announce a new order !";
							S_W << "\t---------------------------------" << endl;
							S_W << "\n\t\tREJECTION \t "<<endl;
							S_W << name << " has not enough scale to announce A new rule ";
							S_W << "\nCNIC\t  " << CNIC << "\nDepartment \t" << dep << "\nScale \t " << grade;
						}
						else
						{
							cout << " \n\n\t\t^^ WRITE YOUR ANNOUNCEMENT ^^ \n";
							 cin.clear();
							cin >> feedback;
							cout << "\n\n\t Be patience in few minutes you received a feedback on this announcement !" << endl;
							S_W << "\n\t\t " << name << " Announcement " << endl;
							S_W << "\t---------------------------------" << endl;
							S_W << email << " :\n\t" << feedback << endl;
							S_W << "\n\t~~~personal information~~~ ";
							S_W << "\n\n\t---------------------------------" << endl;
							S_W << "\n\t\t " << name << " FEEDBACK " << endl;
							S_W << "\t---------------------------------" << endl;
							S_W << email << " :\n\t\t" << feedback << endl;
							S_W << "\n\t~~~personal information~~~ ";
							S_W << "Name :\t " << name << endl;
							S_W << "City name : \t " << ci_name << endl;
							S_W << "Belonged : \t" << live << endl;
							S_W << "Age :\t " << age << endl;
							S_W << " CNIC : \t  " << CNIC << endl;
							S_W << " Education :\t" << qualification << endl;
							S_W << " Currently profession : \t " << profession << endl;
							S_W << "Department : \t" << dep << endl;
							S_W << "Scale : \t" << grade << endl;
							S_W << "Contact number : " << ph_num << endl;
						}
						break;
					}
					case 2:
					{
						cout << "\n\n\n \tDear " << name << "  You are the respectful citizens of the country .please give feedback about the government dicision .your feedback can help us to improve our work and make a new beneficial dicision ." << endl;
						cout << " \n\n\t\t^^ WRITE YOUR FEEDBACK ^^ \n";
						cin.clear();
						cin >> feedback;
						cout << "\n\n\tThanks for your feedback and information ";
						S_W << "\n\n\t---------------------------------" << endl;
						S_W << "\n\t\t " << name << " FEEDBACK " << endl;
						S_W << "\t---------------------------------" << endl;
						S_W << email << " :\n\t\t" << feedback << endl;
						S_W << "\n\t~~~personal information~~~ " << endl;
						S_W << "Name :\t " << name << endl;
						S_W << "City name : \t " << ci_name << endl;
						S_W << "Belonged : \t" << live << endl;
						S_W << "Age :\t " << age << endl;
						S_W << " CNIC : \t  " << CNIC << endl;
						S_W << " Education :\t" << qualification << endl;
						S_W << " Currently professiona : \t " << profession << endl;
						S_W << "Contact number : " << ph_num << endl;
						break;
					}
					}
				}
			}
			else
			{
				cout << "\t\n You are not eligible to add your account !";
				S_W << "\t---------------------------------\n\tNot added " << endl;
				S_W << name << " are no eligible to add his/her account " << endl;
				S_W << "\n\t~~~personal information~~~ ";
				S_W << "\n\n"
					<< name << " of    is "
					<< " has not eligible to add her/his feedback because he/she has one or both reason to not able to give feedback.\n\t ? He/she is not a citizen of Kashmir. \n\t ? He/She has not a required age ." << endl;
		//	}
//		//	S_W.close();
//		//	return 0;
//	}