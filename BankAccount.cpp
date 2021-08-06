#include "BankAccount.h"

BankAccount::BankAccount()
{
	this->accountNumber = uint16_t(0U);
	this->customerPhone = uint16_t(0U);
	this->customerPassword = uint16_t(0U);
	this->customerName = std::string("");
	this->money = uint64_t(0UL);
	this->stateVVIP = false;
}




uint32_t BankAccount::getAccountNumber() const
{
	return this->accountNumber;
}

void BankAccount::setAccountNumber(uint32_t accountNumber)
{
	this->accountNumber = accountNumber;
}

uint32_t BankAccount::getcustomerPassword() const				// get은 수정할게 없음. set에서 수정함.
{
	return this->customerPassword;
}
void BankAccount::setcustomerPassword(uint32_t customerPassword)
{
	this->customerPassword = customerPassword;
}

uint32_t BankAccount::getPhoneNumber() const
{
	return this->customerPhone;
}
void BankAccount::setPhoneNumber(uint32_t customerPhone)
{
	this->customerPhone = customerPhone;
}
std::string BankAccount::getCustomerName() const
{
	return this->customerName;
}
void BankAccount::setCustomerName(std::string customerName)
{
	this->customerName = customerName;
}

uint64_t BankAccount::getmoney() const
{
	return this->money;
}


void BankAccount::setMoney(uint32_t money)
{
	this->money = money;
}

bool BankAccount::getStateVVIP() const
{
	return this->stateVVIP;
}
void BankAccount::setStateVVIP(bool stateVVIP)
{
	this->stateVVIP = stateVVIP;
}

void BankAccount::withdraw()													// 출금 함수
{
	uint64_t balance{ 0UL };
	std::cout << "출금할 금액을 입력하세요 : ";
	std::cin >> balance;
	this->money -= balance;
}

void BankAccount::inputPassword()
{
	uint16_t password{ 0UL };
	std::cout << "비밀번호를 입력하세요 : ";
	std::cin >> password;
	this->customerPassword == password;
}

void BankAccount::collectPassword()
{
	if (this->customerPassword == customerPassword)
	{
		std::cout << "비밀번호가 일치합니다." << std::endl;
	}
}

void BankAccount::deposit()													// 입금 함수
{
	uint64_t balance{ 0UL };
	std::cout << "입금할 금액을 입력하세요 : ";
	std::cin >> balance;
	this->money += balance;
}

void BankAccount::ShowBankAccount()
{
	std::cout << "고객의 이름은 : " << this->customerName << std::endl;
	std::cout << "고객의 계좌는 : " << this->accountNumber << std::endl;
	std::cout << "고객의 휴대폰 번호는 : " << this->customerPhone << std::endl;
	std::cout << "계좌의 잔금은 : " << this->money << std::endl;
	std::cout << "비밀번호는 : " << this->customerPassword << std::endl;

	if (this->stateVVIP) std::cout << this->customerName << "고객님은 VVIP이십니다." << std::endl;
	else std::cout << this->customerName << "고객님은 일반고객 이십니다." << std::endl;
}
