Main.cpp
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include <windows.h>
#include "account.h"
#include "Credit.h"
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include"account.h"
#include "Credit.h"
#include "SilverCredit.h"
#include "Debit.h"
#include "Administrator.h"
#include "employee.h"
#include "Investor.h"
#include "VipDebit.h"



using namespace std;

void write_account(int type);
void display_sp(int);
void change_account(int);
void delete_account(int);
void display_all_accounts();
void deposit_withdraw(int, int);
void main_menu(account ac);
void log_in(int, char*);
void show_greeting(int);
void forget_account(char*, int);
int main();
void loanloan(account ac);
string adminverif;
string adminpass = "locationnanhang";
bool flagf = false;
Debit debobj;
Investor invobj;
VipDebit vipobj;
SilverCredit Silobj;
GoldCredit Gldobj;
PlatinumCredit Pltobj;
Credit crdobj;
employee Empobj;
char ch1;
int number;
char ch2;
int numtemp;





//          MAIN MENU FUNCTION          //

void main_menu(account ac)
{
	char ch;
	do
	{
		show_greeting(number);


		cout << "\n\n\n\tMAIN MENU";
		cout << "\n\n\t1. DEPOSIT AMOUNT";
		cout << "\n\n\t2. WITHDRAW AMOUNT";
		cout << "\n\n\t3. BALANCE INQUIRY";
		cout << "\n\n\t5. CLOSE AN ACCOUNT";
		cout << "\n\n\t6. MODIFY AN ACCOUNT";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";

		{
			cin >> ch;
			switch (ch)
			{
			case '1':
				system("CLS");
				deposit_withdraw(number, 1);
				break;
			case '2':
				system("CLS");
				deposit_withdraw(number, 2);
				break;
			case '3':
				display_sp(number);
				break;
			case '4':
				display_all_accounts();
				break;
			case '5':
				system("CLS");
				delete_account(number);
				break;
			case '6':
				change_account(number);
				system("CLS");
				break;
			case '7':
				main();
				system("CLS");
				break;
			default:cout << "\a";
			}
			cin.ignore();
			cin.get();
		}
	} while (ch != '7');
}
void MainMenuForCreditUsers(account ac)
{



	char ch;
	do
	{
		cout << "\n\tMAIN MENU";
		cout << "\n\n\t1. DEPOSIT AMOUNT";
		cout << "\n\n\t2. TAKE A LOAN";
		cout << "\n\n\t3. WITHDRAW AMOUNT";
		cout << "\n\n\t4. ACCOUNT INQUIRY";
		cout << "\n\n\t5. CLOSE AN ACCOUNT";
		cout << "\n\n\t6. MODIFY AN ACCOUNT";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";


		cin >> ch;
		switch (ch)
		{
		case '1':
			system("CLS");
			deposit_withdraw(number, 1);
			break;
		case '2':
			loanloan(ac);
			break;
		case '3':
			system("CLS");
			deposit_withdraw(number, 2);
			break;
		case '4':
			system("CLS");
			display_sp(number);
			break;
		case '5':
			system("CLS");
			delete_account(number);
			break;
		case '6':
			system("CLS");
			change_account(number);
			break;
		case '7':
			main();
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '7');
}
void MainMenuForVIPDebit(account ac)
{
	char ch;
	do
	{
		cout << "\n\tMAIN MENU";
		cout << "\n\n\t1. DEPOSIT AMOUNT";
		cout << "\n\n\t2. WITHDRAW AMOUNT";
		cout << "\n\n\t3. ACCOUNT INQUIRY";
		cout << "\n\n\t4. CLOSE AN ACCOUNT";
		cout << "\n\n\t5. MODIFY AN ACCOUNT";
		cout << "\n\n\t6. TRANSFER FUNDS";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";


		cin >> ch;
		switch (ch)
		{
		case '1':
			system("CLS");
			deposit_withdraw(number, 1);
			break;
		case '2':
			system("CLS");
			deposit_withdraw(number, 2);
			break;
		case '3':
			display_sp(number);
			break;
		case '4':
			display_all_accounts();
			break;
		case '5':
			system("CLS");
			delete_account(number);
			break;
		case '6':

			system("CLS");
			break;
		case '7':
			main();
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '7');
}
void MainMenuForEmployess(account ac)
{

	char ch;
	do
	{
		cout << "\n\tMAIN MENU";
		cout << "\n\n\t1. WITHDRAW SALARY";
		cout << "\n\n\t2. JOB";
		cout << "\n\n\t3. TIME EMPLOYEED";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";


		cin >> ch;
		switch (ch)
		{
		case '1':

			system("CLS");
			break;
		case '2':

			system("CLS");
			break;
		case '3':

			break;
		case '4':

			break;
		case '5':

			system("CLS");
			break;
		case '6':

			system("CLS");
			break;
		case '7':
			main();
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '7');
}
void MainMenuForInvestors(account ac)
{
	char ch;
	do
	{
		cout << "\n\tMAIN MENU";
		cout << "\n\n\t1. DEPOSIT AMOUNT";
		cout << "\n\n\t2. WITHDRAW AMOUNT";
		cout << "\n\n\t3. INVEST ASSET";
		cout << "\n\n\t3. WITHDRAW STOCK EQUIVALENCE";
		cout << "\n\n\t4. REQUEST CONTRACT REVELUATION";
		cout << "\n\n\t5. MODIFY AN ACCOUNT";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";


		cin >> ch;
		switch (ch)
		{
		case '1':

			system("CLS");
			break;
		case '2':

			system("CLS");
			break;
		case '3':

			break;
		case '4':

			break;
		case '5':

			system("CLS");
			break;
		case '6':

			system("CLS");
			break;
		case '7':
			main();
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '7');
}
void MainMenuForAdmin(account ac)
{
	Administrator ad;
	char ch;
	do
	{
		cout << "\n\tMAIN MENU";
		cout << "\n\n\t1. VIEW ALL MEMBER INFORMATION";
		cout << "\n\n\t2. VIEW ALL  DEBIT MEMBERSHIP WORTH";
		cout << "\n\n\t3. VIEW ALL INVESTMENTS";
		cout << "\n\n\t4. VIEW ALL LOANS";
		cout << "\n\n\t5. VIEW ALL EMPLOYEE INFORMATION";
		cout << "\n\n\t7. LOG OFF";
		cout << "\n\n\tSelect Your Option (1-7) : ";


		cin >> ch;
		switch (ch)
		{
		case '1':
			system("CLS");
			display_all_accounts();
			break;
		case '2':
			system("CLS");
			ad.DisplayAllDebitRecord();
			break;
		case '3':
			system("CLS");
			ad.DisplayAllInvestorRecord();
			break;
		case '4':
			system("CLS");
			ad.DisplayAllCreditRecord();
			break;
		case '5':
			system("CLS");
			ad.DisplayAllemployeeRecord();
			break;
		case '6':
			break;
		case '7':
			main();
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '7');
}

//          FUNCTION TO CREATE A NEW ACCOUNT            //

void write_account(int type)
{
	account ac;
	ofstream outFile;
	outFile.open("Member.dat", ios::binary | ios::app);
	ac.Create_account(type);
	outFile.write(reinterpret_cast<char*> (&ac), sizeof(account));
	outFile.close();
	number = ac.getAccountnumber();
	main();
}

//          FUNCTION TO DISPLAY ACCOUNT DETAILS         //

void display_sp(int n)
{
	account ac;
	bool flag = false;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	cout << "\nBALANCE DETAILS\n";

	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		if (ac.getAccountnumber() == n)
		{
			ac.Show_account();
			cout << "\n\n\t ..........Press Enter to Continue.......... " << endl;
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\n..........Account does not exist..........";
}

//          FUNCTION TO CHANGE THE DETAILS OF THE ACCOUNT           //

void change_account(int n)
{
	account ac;
	bool found = false;
	fstream File;
	File.open("Member.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ac), sizeof(account));
		if (ac.getAccountnumber() == n)
		{
			ac.Show_account();
			cout << "\n\nEnter The New Details of account: " << endl;
			ac.Change();
			int pos = (-1) * static_cast<int>(sizeof(account));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ac), sizeof(account));
			cout << "\n\n\t ..........Record Successfully Updated..........";
			cout << "\n\n\t ..........Press Enter to Continue.......... ";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n ..........Record Not Found.......... ";
}

//          FUNCTION TO DELETE AN ACCOUNT           //

void delete_account(int n)
{
	
		account ac;
		ifstream inFile;
		ofstream outFile;
		inFile.open("Member.dat", ios::binary);
		if (!inFile)
		{
			cout << "File could not be open !! Press any Key...";
			return;
		}
		outFile.open("Temp.dat", ios::binary);
		inFile.seekg(0, ios::beg);
		while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
		{
			if (ac.getAccountnumber() != n)
			{
				outFile.write(reinterpret_cast<char*> (&ac), sizeof(account));
			}
		}
		inFile.close();
		outFile.close();
		remove("Member.dat");
		rename("Temp.dat", "Member.dat");
		cout << "\n\n\t..........Account Successfully Closed..........";
		main();
	
}

//          FUNCTION TO DISPLAY ALL THE ACCOUNTS            //

void display_all_accounts()
{
	account ac;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout << "========================================================================================\n";
	cout << "Acc no.            NAME             Password              Type                   Balance\n";
	cout << "========================================================================================\n";
	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		ac.showReport();
	}
	inFile.close();
	cout << "\n\n\n\t ..........Press Enter to Continue.......... " << endl;
}

//          FUNCTION TO DEPOSIT AND WITHDRAW MONEY          //

void deposit_withdraw(int n, int option)
{
	int amount;
	bool found = false;
	account ac;
	fstream File;
	File.open("Member.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (!File.eof() && found == false)
	{
		File.read(reinterpret_cast<char*> (&ac), sizeof(account));
		if (ac.getAccountnumber() == n)
		{
			ac.Show_account();
			if (option == 1)
			{
				cout << "\n\n\tTO DEPOSIT MONEY ";
				cout << "\n\nEnter The amount of money to be deposited: ";
				cin >> amount;
				ac.getDeposit(amount);
			}
			if (option == 2)
			{
				cout << "\n\n\tTO WITHDRAW MONEY ";
				cout << "\n\nEnter The amount of money to be withdrawn: ";
				cin >> amount;
				int balance = ac.getDeposit() - amount;
				ac.getWithdraw(amount);
			}
			int pos = (-1) * static_cast<int>(sizeof(ac));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char*> (&ac), sizeof(account));
			cout << "\n\n\t ..........Record Successfully Updated..........";
			cout << "\n\n\t ..........A TEXT MESSAGE has been sent to your PHONE about the Update" << endl;
			cout << "\n\n\t ..........Press Enter to Continue.........." << endl;
			system("pause");
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n ..........Record Not Found.......... ";
}

//          FUNCTION TO TAKE LOAN             //
void loanloan(account ac) {
	cout << "How much Would you like to loan from the club" << endl;
	int x;
	cin >> x;
	Credit CredMem;
	SilverCredit SilCred;
	GoldCredit GoldCred;
	PlatinumCredit platCred;
	if (CredMem.getElegibilityForLoan())
	{
		if (ac.getType() == 10000001)
		{
			if (x < SilCred.getLoanLimit())
			{
				ac.getDeposit(x);
				CredMem.takeloan(x);
				cout << "Loan approved" << endl;
				CredMem.saveCreditMember(CredMem);
				MainMenuForCreditUsers(ac);

			}
			else
			{
				cout << "Requested loan amount rejected" << endl;
				MainMenuForCreditUsers(ac);
			}

		}
		else if (ac.getType() == 10000010)
		{
			if (x < GoldCred.getLoanLimit())
			{
				CredMem.takeloan(x);
				cout << "Loan approved" << endl;
				CredMem.saveCreditMember(CredMem);
				MainMenuForCreditUsers(ac);
			}
			else
			{
				cout << "Requested loan amount rejected" << endl;
				MainMenuForCreditUsers(ac);
			}

		}
		else if (ac.getType() == 10000011)
		{
			if (x < platCred.getLoanLimit())
			{
				CredMem.takeloan(x);
				cout << "Loan approved" << endl;
				CredMem.saveCreditMember(CredMem);
				MainMenuForCreditUsers(ac);
			}
			else
			{
				cout << "Requested loan amount rejected" << endl;
				MainMenuForCreditUsers(ac);
			}

		}

	}
	else
	{
		cout << "You still have and outstanding loan, pay outstanding loan to become elegible for a new loan" << endl;
	}
}

//          LOG IN FUNCTION          //

void log_in(int n, char* p)
{

	account ac;
	bool flag = false;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		if (ac.getAccountnumber() == n && (strcmp(ac.getPassword(), p)) == 0)
		{

			int type = ac.getType();
			int Silver = 10000001;
			int Gold = 10000010;
			int Platinum = 10000011;
			int Debit = 10000100;
			int Vip = 10000101;
			int Employee = 10000110;
			int investor = 1000010000;
			int admin = 10000111;


			system("CLS");
			if ((type == Silver) || (type == Gold) || type == Platinum)
			{
				MainMenuForCreditUsers(ac);
			}
			else if (type == Debit)
			{
				main_menu(ac);
			}
			else if (type == Vip)
			{
				MainMenuForVIPDebit(ac);
			}
			else if (type == Employee)
			{
				MainMenuForEmployess(ac);
			}
			else if (type == investor)
			{
				MainMenuForInvestors(ac);
			}
			else if (type == admin)
			{
				MainMenuForAdmin(ac);
			}
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\tPress ENTER and input an existing account number and VALID PASSWORD";
}

//          FUNCTION TO SHOW GREETINGS TO THE USER      //

void show_greeting(int n)
{
	account ac;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	cout << "\n\n\n\tHello There User\n";

	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		if (ac.getAccountnumber() == n)
		{
			ac.Show_account();
			adminverif = ac.getName();
		}
	}
	inFile.close();
}

//          FORGET ACCOUNT FUNCTION         //

void forget_account(char* name, int balance)
{
	account ac;
	bool flag = false;
	ifstream inFile;
	inFile.open("Member.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		return;
	}
	while (inFile.read(reinterpret_cast<char*> (&ac), sizeof(account)))
	{
		if (strcmp(ac.getName(), name) == 0 && ac.getDeposit() == balance)
		{
			cout << "\n\n\tAccount Information";
			ac.Show_account();
			flag = true;
			cout << "\n\n\t ..........Press Enter to Continue.......... " << endl;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\n..........Account does not exist..........";
}

int main()
{
	
	char ch;
	int num;
	char name[100];
	char password[250];
	int balance;
	int type;
	account ac;
	do
	{
		cout << "\n\n\n\t\tWelcome to Fund MGMT";
		cout << "\n\n\t1. LOG IN";
		cout << "\n\n\t2. CREATE A NEW ACCOUNT";
		cout << "\n\n\t3. FORGOT ACCOUNT";
		cout << "\n\n\t4. EXIT";

		cout << "\n\n\tSelect Your Option (1-4) : ";
		cin >> ch;
		switch (ch)
		{
		case '1':
			cout << "\n\n\tEnter The account Number : ";
			cin >> num;
			number = num;
			cout << "\n\n\tEnter Password : ";
			cin.ignore();
			cin.getline(password, 250);
			log_in(num, password);
			break;
		case '2':
		{
			cout << "\n\n\t1. Create new Credit Member";
			cout << "\n\n\t2. Create new Debit  Member";
			cout << "\n\n\t3. Create new Employee Member";
			cout << "\n\n\t4. Create new Investor Member";
			cout << "\n\n\tSelect Your Option (1-4) : ";

			cin >> ch1;
			switch (ch1) {
			case '1': {
				cout << "\n\n\t1. Create new Silver Credit Member";
				cout << "\n\n\t2. Create new Gold Credit Member";
				cout << "\n\n\t3. Create new platinum Credit Member";
				cout << "\n\n\tSelect Your Option (1-3) : ";
				cin >> ch2;
				switch (ch2)
				{
				case '1':

					type = 10000001;
					ac.setType(type);
					write_account(type);
					cout << "\n\n   Welcome To the Membership Fund Managment System" << endl;

					break;
				case '2':

					type = 10000010;
					ac.setType(type);
					write_account(type);
					cout << "\n\n      Welcome To the Membership Fund Managment System" << endl;
					main();
					break;
				case '3':

					type = 10000011;
					ac.setType(type);
					write_account(type);
					cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
					main();
					break;
				}
			}
					break;
			case '2': {
				cout << "\n\n\t1. Create new Ordinary Debit Member";
				cout << "\n\n\t2. Create new vip Debit Member";
				cin >> ch2;
				switch (ch2)
				{
				case '1':
					type = 10000100;
					ac.setType(type);
					write_account(type);
					cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
					main();
					break;

				case '2':
					type = 10000101;
					ac.setType(type);
					write_account(type);
					cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
					main();
					break;
				}
			}
					break;
			case '3': {

				type = 10000110;
				ac.setType(type);
				write_account(type);
				cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
				main();
			}
					break;
			case '4': {

				type = 10001000;
				ac.setType(type);
				write_account(type);
				cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
				main();

			case '5': {
				type = 10000111;
				ac.setType(type);
				write_account(type);
				cout << "\n\n      Welcome  To the Membership Fund Managment System" << endl;
				main();
			}

			}
					break;
			}
			system("CLS");
			break;
		case '3':
			cout << "\n\tName : ";
			cin.ignore();
			cin.getline(name, 100);
			cout << "\n\tBalance (Check your phone for the balance) : ";
			cin >> balance;
			forget_account(name, balance);
			break;
		case '4':
			cout << "\n\n\tThanks for using the Gucci Bank Managemnt System" << endl;
			exit(0);
			system("CLS");
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
		}
	} while (1);
	return 0;

}

