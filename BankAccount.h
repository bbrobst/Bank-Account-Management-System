#pragma once

#include <string>

class BankAccount
{
private:
	std::string accountHolderName, accountNumber;
	double balance;

public:
	BankAccount(const std::string& accountHolderName, const std::string& accountNumber, double balance);

	void deposit(double amount);
	void withdraw(double amount);
	void displayAccountInfo() const;
};

