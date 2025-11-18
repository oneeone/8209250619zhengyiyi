#include<iostream>
using namespace std;
int main()
{
	const double PI = 0.8;
	int a = 2;

	int sum = 0, i = 0;
	do {
		a = a * 2;
		sum += a;
		i++;
	} while (sum <= 100);

	double money = sum * PI;
	double average = money / i;

	cout << "平均每天花" << average << "元";
		return 0;
}