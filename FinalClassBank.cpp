#include <iostream>
#include "BankAccount.h"

int main()
{
	uint32_t customer{ 0U };
	std::cout << "고객님들의 숫자를 입력하세요 : ";
	std::cin >> customer;
	BankAccount* customers{ new BankAccount[customer] };	

	uint32_t index{ 0U };
	for (;;)
	{
		while (index < customer)
		{
			std::cout << "계좌번호를 입력하세요 : " << std::endl;
			uint32_t account_number{ 0U };
			std::cin >> account_number;
			customers[index].setAccountNumber(account_number);
			//(*(customers + index)).setAccountNumber(account_number);

			std::cout << "휴대폰번호를 입력하세요 : " << std::endl;
			uint32_t Phone_number{ 0U };
			std::cin >> Phone_number;
			customers[index].setPhoneNumber(Phone_number);
			//(*(customers + index)).setPhoneNumber(Phone_number);

			std::cout << "고객이름을 입력하세요 : " << std::endl;
			std::string customer_name{ "" };
			std::cin >> customer_name;
			customers[index].setCustomerName(customer_name);

			std::cout << "패스워드를 입력하세요 : " << std::endl;
			uint16_t account_password{ 0U };
			std::cin >> account_password;
			customers[index].setcustomerPassword(account_password);

			std::cout << "계좌에 입금할 금액을 입력하세요 : " << std::endl;
			uint64_t initial_money{ 0UL };
			std::cin >> initial_money;
			customers[index].setMoney(initial_money);

			std::cout << "VVIP 회원입니까? [1:VVIP , 0:NORMAL]" << std::endl;
			bool isVVIP{ false };
			std::cin >> isVVIP;
			customers[index].setStateVVIP(isVVIP);

			++index;
		}
		std::cout << "※※※※※※※※※※※※" << std::endl;
		std::cout << "1.입금" << std::endl;
		std::cout << "2.출금" << std::endl;
		std::cout << "3.통장정리" << std::endl;
		std::cout << "4.비밀번호" << std::endl;
		std::cout << "5.종료" << std::endl;
		std::cout << "※※※※※※※※※※※※" << std::endl;

		uint32_t selection_menu{ 0U };
		std::cin >> selection_menu;
		uint32_t account_number{ 0U };
		int account_password = { 0 };
		switch (selection_menu)
		{
		case 1:
			std::cout << "입금할 계좌번호를 입력하세요 : ";
			std::cin >> account_number;
			for (int i = 0; i < customer; i++)
			{
				if (customers[i].getAccountNumber() == account_number)
				{
					customers[i].deposit();
					customers[i].ShowBankAccount();
				}
			}
			break;

		case 2:
			std::cout << "출금할 계좌번호를 입력하세요 : ";
			std::cin >> account_number;
			for (int i = 0; i < customer; i++)
			{
				if (customers[i].getAccountNumber() == account_number)
				{
					customers[i].withdraw();
					customers[i].ShowBankAccount();
				}
			}
			break;

		case 3:
			std::cout << "통장의 정보를 나타낼 계좌번호를 입력하세요 : ";
			std::cin >> account_number;
			for (int i = 0; i < customer; i++)
			{
				if (customers[i].getAccountNumber() == account_number)
				{
					customers[i].ShowBankAccount();
				}
			}
			break;

		case 4:
			std::cout << "비밀번호를 입력하세요 : ";
			std::cin >> account_password;
			for (int i = 0; i < customer; i++)
			{
				if (customers[i].getcustomerPassword() == account_password)
				{
					customers[i].collectPassword();
					customers[i].ShowBankAccount();
				}
			}
			break;
		case 5:
			goto EXIT;
			break;

		default:
			std::cout << "잘 못 입력하셨습니다." << std::endl;
			break;
		}

		
	}
	EXIT:
	delete[] customers;
}