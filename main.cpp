#include <iostream>

using namespace std;

void input(int*, int*);

int main()
{
	int num1, num2;
	
	input(&num1, &num2);
	cout << "Числа: " << num1 <<  "\t" << num2;
	cout << "Сумма этих двух чисел: " << num1 + num2 << endl;
	
	return 0;
}

void input(int *a, int *b)
{
	cout << "Введите число №1: ";
	cin >> *a;
	
	cout << "Введите число №2: ";
	cin >> *b;
}