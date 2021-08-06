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
		몇개 추가
	*/

public:
	BankAccount();													// 리턴타입이 있으면 함수임.

	uint32_t getAccountNumber() const;
	void setAccountNumber(uint32_t accountNumber);
	uint32_t getcustomerPassword() const;							// get은 수정할게 없음. set에서 수정함.
	void setcustomerPassword(uint32_t customerPassword);
	uint32_t getPhoneNumber() const;								// get은 수정할게 없음. set에서 수정함.
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
