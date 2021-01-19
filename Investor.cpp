#include "Investor.h"
#include <iostream>
#include <cstring>
#include <fstream> 
#include<iomanip>

using namespace std;

void Investor::saveInvestor( Investor ob)
{
	ofstream outFile;
	outFile.open("InvestorMember.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> ( &ob), sizeof(Investor));
	outFile.close();
}
void Investor::showInvestorReport(Investor obj)
{
	cout << InvestmentWorth << " "<< contractInfo << endl;
}
void Investor::putdata()
{

	cout << accountnumber << setw(10) << " " << type << setw(10) << " " << InvestmentWorth << setw(15) << " " << contractInfo << setw(20) << "\n";

}

