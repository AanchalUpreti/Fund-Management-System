#pragma once
#include "account.h"

class Debit : public account
{
private:
	int accountnumber;
	int type;
	int PendingTransfer;
	int TransferLimit = 500;

public:
	virtual int getTransferLimit();
	virtual void saveDebitMember( Debit ob);
	void showDebitReport() const;
	void putdata();

	
	
	
	
};

