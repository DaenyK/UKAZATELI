#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;

unsigned short q;


void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	unsigned short nz;

	do
	{
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{

		case 1:
		{
			//17.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ ��� ��������� 
			//� ���� ����������-�������.
			int mas[5] = { 1,2,3,4,5 };
			int sum = 0, pr = 1;
			print_arr(mas, 5);
			MasReturn(mas, 5, &sum, &pr);
		}break;

		case 2:
		{
			//18.	����� �� ������� ��� � � 17 ������� �������� ��� ������������ ������� (�������� � 2 �������: 1. ���������� �������; 
			//2 ������������� ���������� �� �������)
			//a.���� int
			//b.���� double
			//c.���� Shor int
			cout.precision(3);
			short zd;
			cout << "������ ��������� ���������� �� 1 - short, 2  - int, 3 - double?\n";
			cin >> zd;
			switch (zd)
			{
			case 1:
			{

				short mass[2][5];
				short sum = 0;
				int pr = 1;
				for (int i = 0;i < 2;i++)
				{
					for (int j = 0;j < 5;j++)
					{
						mass[i][j] = 1 + rand() % 10;
						cout << mass[i][j] << "\t";
					}
					cout << endl;
				}
				MasReturn(mass, 2, &sum, &pr);
			}break;

			case 2:
			{
				int mas[2][5];
				int sum = 0, pr = 1;
				createMatrix(mas, 2, 1, 10, positive);
				print_matrix(mas, 2);
				MasReturn(mas, 2, &sum, &pr);
			}break;

			case 3:
			{
				double mas[2][5];
				createMatrix(mas, 2, 1, 10, positive);
				print_matrix(mas, 2);
				double sum = 0, pr = 1;
				MasReturn(mas, 2, &sum, &pr);
			}break;

			}




		}break;

		case 3:
		{
			//19.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������.
			cout << "������� ���������� �������� �������� � ��������� ���� � ���������� �������\n";
		}break;

		case 4:
		{
			//22.	������� �������, ����������� ��������� ���� ��������� � ����� �������.
			int mas[5] = { 1,2,3,4,5 };
			int sum = 0, pr = 1;
			print_arr(mas, 5);

			newArray(mas, 5);
		}break;

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}

