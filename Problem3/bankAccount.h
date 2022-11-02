#ifndef DEREK_LED_H
#define DEREK_LED_H

using namespace std;

class BankAccount {
	private:
		string name;
		float balance;
		void setName(string n);
		void setBalance(float bal);
	public:
		BankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		~BankAccount();
};
#endif