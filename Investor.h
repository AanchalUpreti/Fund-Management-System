#pragma once
#include "account.h"
class Investor : public account
{
private:
	int accountnumber;
	int type;
	int InvestmentWorth;
	bool contractInfo;
public:
	void saveInvestor( Investor ob);
	void showInvestorReport(Investor obj );
	void putdata();
};

