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

uint32_t BankAccount::getcustomerPassword() const				// get�� �����Ұ� ����. set���� ������.
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

void BankAccount::withdraw()													// ��� �Լ�
{
	uint64_t balance{ 0UL };
	std::cout << "����� �ݾ��� �Է��ϼ��� : ";
	std::cin >> balance;
	this->money -= balance;
}

void BankAccount::inputPassword()
{
	uint16_t password{ 0UL };
	std::cout << "��й�ȣ�� �Է��ϼ��� : ";
	std::cin >> password;
	this->customerPassword == password;
}

void BankAccount::collectPassword()
{
	if (this->customerPassword == customerPassword)
	{
		std::cout << "��й�ȣ�� ��ġ�մϴ�." << std::endl;
	}
}

void BankAccount::deposit()													// �Ա� �Լ�
{
	uint64_t balance{ 0UL };
	std::cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
	std::cin >> balance;
	this->money += balance;
}

void BankAccount::ShowBankAccount()
{
	std::cout << "���� �̸��� : " << this->customerName << std::endl;
	std::cout << "���� ���´� : " << this->accountNumber << std::endl;
	std::cout << "���� �޴��� ��ȣ�� : " << this->customerPhone << std::endl;
	std::cout << "������ �ܱ��� : " << this->money << std::endl;
	std::cout << "��й�ȣ�� : " << this->customerPassword << std::endl;

	if (this->stateVVIP) std::cout << this->customerName << "������ VVIP�̽ʴϴ�." << std::endl;
	else std::cout << this->customerName << "������ �Ϲݰ� �̽ʴϴ�." << std::endl;
}
