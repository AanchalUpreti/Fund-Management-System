#include "account.h"
#include <iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>

using namespace std;

void account::Create_account(int tye)
{
	int numtemp;
Start:
	cout << "\n\tPlease enter 4 DIGITS for your account number (DIGITS starts from 1000): ";
	cin >> numtemp;
	while (numtemp < 1000 || numtemp>9999)
	{
		cout << "\n\t\tERROR: Invalid DIGITS! " << endl;
		cout << "\n\tPlease enter 4 DIGITS for your account number: ";
		cin >> numtemp;
	}
	account ac;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		if (ac.getAccountnumber() == numtemp)
		{
			cout << "The account number you have entered already exists!";
			goto Start;
		}
	}
	inFile.close();
	accountnumber = numtemp;
	cout << "\n\tEnter the FIRST and LAST name of The account Holder : ";
	cin.ignore();
	cin.getline(name, 100);
	cout << "\n\tEnter the PASSWORD for The account : ";
	cin.getline(password, 250);
	cout << "\n\tEnter Account openning deposit : ";
	cin >> money;
	type = tye;
	ofstream outFile;
	outFile.open("Member.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> (&ac), sizeof(account));
	outFile.close();
	cout << "\n\n\n\t..........Account Created.........." << endl;
	cout << "\n\n\n\t..........Press Enter to Continue.........." << endl;
}
void account::Show_account() const
{
	cout << "\nAccount No. : " << accountnumber;
	cout << "\nPassword : " << "*****";
	cout << "\nAccount Holder Name : " << name;
	cout << "\nBalance amount :" << money;
	cout << "\nType of Account : " << type;


}
void account::Change()
{
	cout << "\nAccount Number : " << accountnumber;
	cout << "\n\nModify Account Holder Name : ";
	cin.ignore();
	cin.getline(name, 100);
	cout << "\n\nModify Password : ";
	cin.getline(password, 250);

}
void account::getDeposit(int x)
{
	money = money + x;
}
void account::getWithdraw(int x)
{
	money = money - x;
}
void account::showReport() const
{
	cout << accountnumber << setw(10) << " " << name << setw(10) << " " << password << setw(15) << " " << type << setw(20) << " " << money << endl;
}
int account::getAccountnumber() const
{
	return accountnumber;
}
int account::getDeposit() const
{
	return money;
}
int account::getType()
{
	return type;
}
void account::setType(int s)
{
	type = s;
}
char* account::getName()
{
	return name;
}
char* account::getPassword()
{
	return password;
}



void account::putdata()
{

	cout << accountnumber << setw(10) << " " << name << setw(10) << " " << password << setw(15) << " " << type << setw(20) << money << setw(20) << "\n";

}


