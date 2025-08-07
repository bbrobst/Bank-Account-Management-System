#include <iostream>

#include "BankAccount.h"

int main() {
	BankAccount ba1("Jerry Rice", "0083928", 70000);

	ba1.displayAccountInfo();
	ba1.deposit(100);
	ba1.withdraw(50);
	ba1.displayAccountInfo();

}