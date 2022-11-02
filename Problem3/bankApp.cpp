// bankAccount.cpp takes no argument
// Example: ./bankApp
#include<iostream>
#include<string>
#include "bankAccount.h"

using namespace std;

int main(int argc, char* argv[]){
	// Instantiate a BankAccount object called jackAccount
	BankAccount jackAccount("Jack Smith", 50);
	// Instantiate a BankAccount object called jillAccount
	BankAccount jillAccount("Jill Brian", 100);
	// Instantiate an array of bankAccount objects named bankArray of size 3
	BankAccount bankArray[3] = {BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30)};
	
	// Deposit
	cout << endl;
	jackAccount.deposit(30);
	jillAccount.deposit(30);
	bankArray[0].deposit(30);
	bankArray[1].deposit(30);
	bankArray[2].deposit(30);
	// Withdraw
	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	bankArray[0].withdraw(20);
	bankArray[1].withdraw(20);
	bankArray[2].withdraw(20);
	// Print out the names of each of the accounts and balances for each of the 5 accounts.
	cout << "Customer Name: " << jackAccount.getName() << endl;
	cout << "Balance: $" << jackAccount.getBalance() << endl;

	cout << endl;
	cout << "Customer Name: " << jillAccount.getName() << endl;
	cout << "Balance: $" << jillAccount.getBalance() << endl;

	cout << endl;
	for(int i=0; i<3; i++){
		cout << "Customer Name: " << bankArray[i].getName() << endl;
		cout << "Balance: $" << bankArray[i].getBalance() << endl;
		cout << endl;
	}
};
