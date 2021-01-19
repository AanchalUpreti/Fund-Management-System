#include "Debit.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include<iomanip>


using namespace std;

int Debit::getTransferLimit()
{
	return TransferLimit;
}
void Debit::saveDebitMember(Debit ob)
{
	ofstream outFile;
	outFile.open("OrdinaryDebitMember.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> (&ob), sizeof(Debit));
	outFile.close();
}
void Debit::putdata()
{

	cout << accountnumber << setw(10) << " " << type << setw(10) << " " << PendingTransfer << setw(25) << " " << TransferLimit << setw(20) <<"\n";

}

