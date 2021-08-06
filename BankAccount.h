#pragma once
#include <iostream>

class BankAccount
{
private:
	uint32_t accountNumber;
	uint32_t customerPhone;
	uint32_t customerPassword;
	std::string customerName;
	uint64_t money;
	bool stateVVIP;
	/*
		� �߰�
	*/

public:
	BankAccount();													// ����Ÿ���� ������ �Լ���.

	uint32_t getAccountNumber() const;
	void setAccountNumber(uint32_t accountNumber);
	uint32_t getcustomerPassword() const;							// get�� �����Ұ� ����. set���� ������.
	void setcustomerPassword(uint32_t customerPassword);
	uint32_t getPhoneNumber() const;								// get�� �����Ұ� ����. set���� ������.
	void setPhoneNumber(uint32_t customerPhone);
	std::string getCustomerName() const;
	void setCustomerName(std::string customerName);
	uint64_t getmoney() const;
	void setMoney(uint32_t money);
	bool getStateVVIP() const;
	void setStateVVIP(bool stateVVIP);
	void withdraw();
	void inputPassword();
	void collectPassword();
	void deposit();
	void ShowBankAccount();
};
