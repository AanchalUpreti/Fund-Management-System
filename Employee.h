#pragma once
#include "account.h"
class employee :public account
{
private:
	int accountnumber;
	int type;
	char Job[100];
	int Salary;
	int Worktime;

public:
	void SetJob(char s[100]);
	char* GetJob();
	int GetSalary();
	int getWorkTime();
	void Addworktime(int x);
	void save(account obj, employee ob);
	void saveEmployee(employee ob);
	void putdata();


};

