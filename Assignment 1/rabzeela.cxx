#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ifstream txt("tanzeela.txt");
	txt.open("tanzeela.txt",ios::in) ;
	ofstream file("tanzeela.txt",ios::app);
	file << "Assalamualaikum" << endl;
	file << "ksy Hain ap " << endl;
	if(file.is_open())
	{
		cout << "Hi" <<endl;
		file<< "ksy Hain ap";
	}
	else
	{
		cout << "Wrong ";
	}
	file.close();
	return 0;
}