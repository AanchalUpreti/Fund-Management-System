#include "employee.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include<iomanip>

using namespace std;



void employee::SetJob(char s[100])
{
	Job[100] = s[100];
}
char* employee::GetJob()
{
	return Job;
}
int employee::GetSalary()
{
	return Salary;
}
int employee::getWorkTime()
{
	return Worktime;
}
void employee::Addworktime(int x)
{
	Worktime =+ x;
}
void employee::save(account obj, employee ob)
{
	ofstream outFile;
	outFile.open("EmployeeMember.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> (&obj, &ob), sizeof(account));
	outFile.close();
}
void employee::saveEmployee(employee ob)
{
	ofstream outFile;
	outFile.open("DeditMember.dat", ios::out | ios::binary);
	outFile.write(reinterpret_cast<char*> (&ob), sizeof(employee));
	outFile.close();
}
void employee::putdata()
{

	cout << accountnumber << setw(10) << " " << type << setw(10) << " " << Job << setw(15) << " " << Salary << setw(20) << " " << Worktime << setw(20) << "\n";

}

