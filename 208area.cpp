#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入一个数：" << endl;
	cin >> a;

	if (a < 0)
	{
		cout << "a不能是负值\n";
		return 0;
	}
	else
	{
		double x = a / 2;
		double new_x;

		do
		{
			new_x = 0.5 * (x + a / x);
			x = new_x;
		} while (x - a < 1e-5 || a - x < 1e-5);

		cout << "平方根为：" << x;
	}
	return 0;
}