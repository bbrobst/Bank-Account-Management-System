#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(const std::string& accountHolderName, const std::string& accountNumber, double balance) : accountHolderName(accountHolderName), accountNumber(accountNumber), balance(balance)
{
}

void BankAccount::deposit(double amount)
{
	if (amount > 0) {
		balance += amount;
		std::cout << "$" << amount << " was successfully deposited.\n";
	}
	else {
		std::cout << "Enter a number greater than 0.\n";
	}
}

void BankAccount::withdraw(double amount)
{
	if (amount > 0 && balance >= amount) {
		balance -= amount;
		std::cout << "$" << amount << " was successfully withdrawn.\n";
	}
	else {
		std::cout << "Enter a number greater than 0 and balance must be greater than or equal to amount entered.\n";
	}
}

void BankAccount::displayAccountInfo() const
{
	std::cout << "Account holder name: " << accountHolderName << "\n";
	std::cout << "Account number: " << accountNumber << "\n";
	std::cout << "Balance: $" << balance << "\n";
}
