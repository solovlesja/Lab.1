#pragma once
#pragma warning(default:4716)
class Vector1
{
private:
	int length;
	int* mas;
public:
	Vector1();
	void Print();
	~Vector1();
	Vector1 (Vector1 &src);
	void setlength(int length);
	int getlength();
	int Summ();
	void Vichit(int k);
	void Umnozh(int umn);
	double Modul();
};
