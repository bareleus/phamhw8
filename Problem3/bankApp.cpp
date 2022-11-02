#include<iostream>
#include<string>
#include "bankAccount.h"

using namespace std;

int main(int argc, char* argv[]){
	BankAccount jackAccount("Jack Smith", 50);
	BankAccount jillAccount("Jill Brian", 100);
	BankAccount bankArray[3] = {BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30)};

	cout << endl;
	jackAccount.deposit(30);
	jillAccount.deposit(30);
	bankArray[0].deposit(30);
	bankArray[1].deposit(30);
	bankArray[2].deposit(30);

	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	bankArray[0].withdraw(20);
	bankArray[1].withdraw(20);
	bankArray[2].withdraw(20);

	cout << "Customer Name: " << jackAccount.getName() << endl;
	cout << "Balance: $" << jackAccount.getBalance() << endl;

	cout << endl;
	cout << "Customer Name: " << jillAccount.getName() << endl;
	cout << "Balance: $" << jillAccount.getBalance() << endl;

	cout << endl;
	cout << "Customer Name: " << bankArray[0].getName() << endl;
	cout << "Balance: $" << bankArray[0].getBalance() << endl;

	cout << endl;
	cout << "Customer Name: " << bankArray[1].getName() << endl;
	cout << "Balance: $" << bankArray[1].getBalance() << endl;

	cout << endl;
	cout << "Customer Name: " << bankArray[2].getName() << endl;
	cout << "Balance: $" << bankArray[2].getBalance() << endl;
};
