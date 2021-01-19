#include <fstream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>

using namespace std;

void Credit::takeloan(int x)
{
	LoanBalance = x;
	ElegibleForLoan = 0;
};
void Credit::payloan(int y)
{
	LoanBalance = -y;
	if (LoanBalance == 0)
	{
		ElegibleForLoan = 1;
	};
}
bool Credit::getElegibilityForLoan()
{
	return ElegibleForLoan;
};
void Credit::saveCreditMember(Credit ob)
{
	ofstream outFile;
	outFile.open("CreditMember.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> (&ob), sizeof(Credit));
	outFile.close();
}
void Credit::showCreditMemberReport(Credit ob) const
{
	cout  << "Outstanding Loan Balance: " << LoanBalance << endl;
	bool flag = ob.getElegibilityForLoan();
	if (flag == 0) 
	{
		cout << "You are currently not elegibil for a loan" << endl;
	}
}
void Credit::putdata()
{

	cout << accountnumber << setw(10) << " " << type << setw(10) << " " << LoanBalance << setw(15) << " " << ElegibleForLoan << setw(20) << "\n";

}

SilverCredit.h

#pragma once
#include "Credit.h"
class SilverCredit :public Credit
{
private: 
	int LoanLimit = 500;
public: 
	int getLoanLimit();
};
class GoldCredit :public Credit
{
private:
	int LoanLimit = 1500;
public:
	int getLoanLimit();
};
class PlatinumCredit :public Credit
{
private:
	int LoanLimit = 5000;
public:
	int getLoanLimit();
};

