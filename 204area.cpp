#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个算式：\n";
	int a, b;
	char i;
	cin >> a >> i >> b;
	float c = 0;

	switch (int(i))
	{
	case 43:
		c = a + b;
		cout << a << "+" << b << "=" << c;
		break;

	case 45:
		c = a - b;
		cout << a << "-" << b << "=" << c;
		break;

	case 47:
		if (b != 0)
		{
			c = static_cast<double>(a) / b;
			cout << a << "/" << b << "=" << c;
		}
		else
			cout << "除数不能为0\n";

		break;

	case 42:
		c = a * b;
		cout << a << "*" << b << "=" << c;
		break;

	case 37:
		c = a % b;
		cout << a << "%" << b << "=" << c;
		break;

	default:
		cout << "运算符错误\n";
	}
	return 0;




}
