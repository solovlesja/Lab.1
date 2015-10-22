#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath> 
#include "vector.h"
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_CTYPE, "Rus");
	int i, summa = INT_MIN;
	int index = 0;
	Vector1* arr = new Vector1[10];
	for(int i = 0; i < 10; i++)
	{
		arr[i].Print();
		cout<<endl;
	}

	for (i=0; i<10; i++)
	{
		if(arr[i].Summ() > summa)
		{
			summa = arr[i].Summ();
			index = i;
		}
	}
		cout << "Сумма наибольшая: " << summa << endl;
		cout << "Наибольший вектор (индекс): " << index << endl;
		
	Vector1 v;
    v.Print(); // исходный массив
    cout << "Модуль: " << v.Modul() << endl;

	v.Print();
    v.Summ();
	cout << "Сумма: " << v.Summ() << endl;

	
    v.Umnozh(2);
	cout << "Умножение: ";
	v.Print() ;

	
    v.Vichit(2);
	cout << "Вычитание: ";
    v.Print();
	
    return 0;
		}
