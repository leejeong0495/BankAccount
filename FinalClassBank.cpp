#include <iostream>
#include "BankAccount.h"

int main()
{
	uint32_t customer{ 0U };
	std::cout << "���Ե��� ���ڸ� �Է��ϼ��� : ";
	std::cin >> customer;
	BankAccount* customers{ new BankAccount[customer] };	

	uint32_t index{ 0U };
	for (;;)
	{
		while (index < customer)
		{
			std::cout << "���¹�ȣ�� �Է��ϼ��� : " << std::endl;
			uint32_t account_number{ 0U };
			std::cin >> account_number;
			customers[index].setAccountNumber(account_number);
			//(*(customers + index)).setAccountNumber(account_number);

			std::cout << "�޴�����ȣ�� �Է��ϼ��� : " << std::endl;
			uint32_t Phone_number{ 0U };
			std::cin >> Phone_number;
			customers[index].setPhoneNumber(Phone_number);
			//(*(customers + index)).setPhoneNumber(Phone_number);

			std::cout << "���̸��� �Է��ϼ��� : " << std::endl;
			std::string customer_name{ "" };
			std::cin >> customer_name;
			customers[index].setCustomerName(customer_name);

			std::cout << "�н����带 �Է��ϼ��� : " << std::endl;
			uint16_t account_password{ 0U };
			std::cin >> account_password;
			customers[index].setcustomerPassword(account_password);

			std::cout << "���¿� �Ա��� �ݾ��� �Է��ϼ��� : " << std::endl;
			uint64_t initial_money{ 0UL };
			std::cin >> initial_money;
			customers[index].setMoney(initial_money);

			std::cout << "VVIP ȸ���Դϱ�? [1:VVIP , 0:NORMAL]" << std::endl;
			bool isVVIP{ false };
			std::cin >> isVVIP;
			customers[index].setStateVVIP(isVVIP);

			++index;
		}
		std::cout << "�ءءءءءءءءءءء�" << std::endl;
		std::cout << "1.�Ա�" << std::endl;
		std::cout << "2.���" << std::endl;
		std::cout << "3.��������" << std::endl;
		std::cout << "4.��й�ȣ" << std::endl;
		std::cout << "5.����" << std::endl;
		std::cout << "�ءءءءءءءءءءء�" << std::endl;

		uint32_t selection_menu{ 0U };
		std::cin >> selection_menu;
		uint32_t account_number{ 0U };
		int account_password = { 0 };
		switch (selection_menu)
		{
		case 1:
			std::cout << "�Ա��� ���¹�ȣ�� �Է��ϼ��� : ";
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
			std::cout << "����� ���¹�ȣ�� �Է��ϼ��� : ";
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
			std::cout << "������ ������ ��Ÿ�� ���¹�ȣ�� �Է��ϼ��� : ";
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
			std::cout << "��й�ȣ�� �Է��ϼ��� : ";
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
			std::cout << "�� �� �Է��ϼ̽��ϴ�." << std::endl;
			break;
		}

		
	}
	EXIT:
	delete[] customers;
}