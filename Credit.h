#pragma once
#include "account.h"
class Credit :public account
{
public:
    virtual void takeloan(int x);
	virtual void payloan(int y);
	virtual bool getElegibilityForLoan();
	virtual void showCreditMemberReport(Credit ob) const;
	virtual void saveCreditMember(Credit ob);
	void putdata();

	
private:
	int LoanBalance;
	bool ElegibleForLoan;
	int accountnumber;
	int type;

};


