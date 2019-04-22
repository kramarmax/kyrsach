#include <iostream>
#include <fstream>
#include <Windows.h>
void strcpy_s(char* a, int b, const char* c)            ///��������� � �������� �� ��������
{
    strcpy(a, c);
}

//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>

using namespace std;

#include "structures.h"
#include "BakeryProduct.h"
#include "Builder.h"
#include "Director.h"
#include "BaguetteBuilder.h"
#include "BreadBuilder.h"
#include "CiabattaBuilder.h"
#include "LoafBuilder.h"
#include "BrownieBuilder.h"
#include "CakeBuilder.h"

int main()
{
	setlocale(LC_ALL, "rus");

	BakeryProduct* bakery_product;
	Director director;

	BaguetteBuilder baguette_builder;
	BreadBuilder bread_builder;
	CiabattaBuilder ciabatta_builder;
	LoafBuilder loaf_builder;
	BrownieBuilder brownie_builder;
	CakeBuilder cake_builder;


	while (1)
	{
		int a;
		cout << "1) �������� �������\n2) ��������� �� ����� ����� ��������� �������\n3) �������� ����\n4) �����\n- ";
		cin >> a;
		switch (a)
		{
			case 1:
			{
				int b;
				cout << "\n1) �����\n2) ����\n3) ��������\n4) �������\n5) ��������\n6) ����\n- ";
				cin >> b;
				switch (b)
				{
					case 1:
						director.setBuilder(&baguette_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n�����:", 2);
						break;
					case 2:
						director.setBuilder(&bread_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n����:", 1);
						break;
					case 3:
						director.setBuilder(&ciabatta_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n��������:", 2);
						break;
					case 4:
						director.setBuilder(&loaf_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n�������:", 4);
						break;
					case 5:
						director.setBuilder(&brownie_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n��������:", 3);
						break;
					case 6:
						director.setBuilder(&cake_builder);
						bakery_product = director.getBakeryProduct();
						bakery_product->recipe("\n����:", 3);
						break;
				}
				break;
			}
			case 2:
			{
				ifstream file;
				try
				{
					file.open("file.txt");
					if (!file.is_open())
						throw 0;
				}
				catch (int m)
				{
					cout << "FILE CANNOT BE " << m << "PENED." << endl;
					return 0;
				}

				char *str = new char[1000];
				int i = 0;
				while (file.get(str[i]))
				{
					cout << str[i];
					i++;
				}
				delete[] str;
				file.close();
				break;
			}
			case 3:
			{
				ofstream file("file.txt");
				file.clear();						//������� �����
				file.close();
				break;
			}
		}
		if (a == 4)
			break;

	}
	///_CrtDumpMemoryLeaks();
	return 0;
}
