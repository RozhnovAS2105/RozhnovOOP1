// RozhnovAS05-OOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "RozhnovStudent.h"
#include "RozhnovSHPEVRDAY.h"
#include <windows.h>
#include <cctype>

using namespace std;

void ShowMenu()
{
	cout << "0. Выход\n1. Добавить клиента\n2. Показать список клиентов\n3. Чтение из файла\n4. Сохранить в файл\n5. Очистить список посетителей" << endl;
}

int main()
{
	setlocale(LC_ALL, ".1251");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	RozhnovSHPEVRDAY Tools;
	int Option;
	//string OFF;

	do
	{
		ShowMenu();
		cout << "Введите ваш выбор: ";
		//cin >> Option;

		while (!(cin >> Option))
		{
			cin.clear(); // сброс флага ошибки
			cin.ignore(INT_MAX, '\n'); // очистка буфера ввода
			//cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Очищаем буфер ввода
			cout << "Ошибка ввода. Введите цифру от 0 до 5!" << endl;
			//continue;
		}

		if (Option < 0 || Option > 5)
		{
			cout << "Введите цифру от 0 до 5! \n" << endl;
			continue;
		}

		switch (Option)
		{
		case 0:
			cout << "До свидания!" << endl;
			break;
		case 1:
			Tools.AddCustomer();

			break;
		case 2:
			Tools.ShowCustomersList();

			break;
		case 3:
			Tools.FileRead();

			break;
		case 4:
			Tools.FileSave();

			break;
		case 5:
			Tools.ClearCustomersList();

			break;
		//default:
			//cout << "Введите цифру от 0 до 5!" << endl;
			//break;
		}
	} while (Option != 0);
	return 0;
}
