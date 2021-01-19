#include "Administrator.h"
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<conio.h>

using namespace std;
void Administrator :: DisplayAllDebitRecord() 
{
	fstream f;
	Debit Stu;

	f.open("DebitMember.dat", ios::in | ios::binary);

	cout << "\n\n\t\t DEBIT ACCOUNT HOLDER LIST\n\n";
	cout << "========================================================================================\n";
	cout << "Acc no.         Type           Pending Transfer Amount                Transfer Limit\n";
	cout << "========================================================================================\n";
	while ((f.read((char*)&Stu, sizeof(Stu))))
		Stu.putdata();

	f.close();

}

void Administrator :: DisplayAllCreditRecord()
{
	fstream f;
	Credit Stu;

	f.open("CreditMember.dat", ios::in | ios::binary);

	cout << "\n\n\t\t CREDIT ACCOUNT HOLDER LIST\n\n";
	cout << "========================================================================================\n";
	cout << "Acc no.             Type                Loaned Balance                Eligibility       \n";
	cout << "========================================================================================\n";
	while ((f.read((char*)&Stu, sizeof(Stu))))
		Stu.putdata();

	f.close();
}

void Administrator :: DisplayAllInvestorRecord()
{
	fstream f;
	Investor Stu;

	f.open("InvestorMember.dat", ios::in | ios::binary);

	cout << "\n\n\t\t INVESTORS ACCOUNT HOLDER LIST\n\n";
	cout << "========================================================================================\n";
	cout << "Acc no.             Type                Invested Net Worth            Access to contract\n";
	cout << "========================================================================================\n";
	while ((f.read((char*)&Stu, sizeof(Stu))))
		Stu.putdata();

	f.close();

}

void Administrator :: DisplayAllemployeeRecord()
{
	fstream f;
	employee Stu;

	f.open("EmployeeMember.dat", ios::in | ios::binary);

	cout << "\n\n\t\t EMPLOYEE ACCOUNT HOLDER LIST\n\n";
	cout << "========================================================================================\n";
	cout << "Acc no.             Type                Job                 Salary           Work Time\n";
	cout << "========================================================================================\n";
	while ((f.read((char*)&Stu, sizeof(Stu))))
		Stu.putdata();

	f.close();
}

