#pragma once
class account
{
public:
	virtual void Create_account(int tye); //Get data from user to create a bank account
	virtual void Show_account() const; //Show the accounts created on screen
	virtual void Change(); //Change the account data
	virtual void getDeposit(int); //Get the amount of money from user and add to balance
	virtual void getWithdraw(int); //Get the amount of money from user and deduce from balance
	virtual void showReport() const; // Show the accounts in the bank
	virtual int getAccountnumber() const; //Gets the account number
	virtual int getDeposit() const; //Gets the balance amount
	virtual int getType(); //Gets the type of account
	virtual void setType(int s);
	virtual char* getName(); //Gets the name of the account
	virtual char* getPassword(); //Gets the password of the account


	void putdata();

private:
	int accountnumber;
	char name[100];
	char password[250];
	int money;
	int type;
};

