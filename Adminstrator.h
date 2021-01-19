#pragma once
#include "account.h"
#include "Credit.h"
#include "Debit.h"
#include "employee.h"
#include "Investor.h"
class Administrator :public account , Credit , Debit, employee ,Investor
{
public:
	void DisplayAllDebitRecord();
	void DisplayAllCreditRecord();
	void DisplayAllInvestorRecord();
	void DisplayAllemployeeRecord();
};

