#pragma once
#include "Debit.h"
class VipDebit :public Debit
{
private: 
	int TransferLimit = 100000;
public: 
	void ChangeTransferLimit(int change);
};

