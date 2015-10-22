#include "stdafx.h"
#include <iostream>
#include "vector.h"


	Vector1::Vector1() //конструктор
	{
		length = 5;
		mas = new int[length];
	for (int i=0; i < length; i++) mas[i] = rand() % 100 - 50;
    }

    Vector1::Vector1 (Vector1 &src) //копирование
	{
		length=src.length;
		for(int i=0; i<src.length; ++i)
			mas[i] = src.mas[i];
	}

	void Vector1::setlength(int length) { 
		this -> length = length;
	}
    int Vector1::getlength() {return length; }

	
	int Vector1::Summ()
	{
		int sum = 0;
		for(int i =0; i < length; i++)
		{
			sum += mas[i];
		}
		return sum;
	}

	void Vector1::Vichit(int k) //вычитание
	{
		for (int i = 0; i < length; i++)
		{
			 mas[i] -= k;// ?
	}
		}

		Vector1::~Vector1()//деструктор
	{
		delete[] mas;
	}
	double Vector1::Modul()        //модуль
    {
        double modul = 0.0;
        for (int i=0; i < length; i++ ) 
			modul += mas[i] * mas[i]; 
        return sqrt(modul);
    }
	void Vector1::Umnozh(int umn)
	{
	for (int i = 0; i < length; i++)
		mas[i] = mas[i] * umn;
	}
	
	void Vector1::Print()
	{
		for (int i = 0; i < length; i++) std::cout << mas[i] << std::ends;
		std::cout << std::endl;
	}
	
		
