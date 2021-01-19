#include "VipDebit.h"
#include <iostream>

using namespace std;

void VipDebit::ChangeTransferLimit(int change)
{
	if (change < 100000)
	{
		TransferLimit = change;
	}
	else
	{
		cout << "Requsted change limit is out of range, please retry with a suitable limit" << endl;
	}
}

