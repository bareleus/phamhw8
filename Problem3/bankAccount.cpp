#include<iostream>
#include<string>
#include<sstream>
#include "bankAccount.h"
using namespace std;

BankAccount::BankAccount(string n, float bal){
	name = n;
	balance = bal;
}

void BankAccount::setName(string n){
	name = n;
}

void BankAccount::setBalance(float bal){
	balance = bal;
}

string BankAccount::getName(){
	return name;
}

float BankAccount::getBalance(){
	return balance;
}

void BankAccount::deposit(float dep){
	balance += dep;
}

void BankAccount::withdraw(float draw){
	balance -= draw;
}

BankAccount::~BankAccount() {}
