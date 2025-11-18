#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "请输入两个正整数：\n";
	cin >> a >> b;

	int min=(a<b)?a:b;
	for (int i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "这两个数的最大公约数为：" << i << endl;
			break;
		}
	}
	int max = (a < b) ? b : a;
	for (int j = max; j <= a * b; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "这两个数的最小公倍数为：" << j << endl;
			break;
		}
	}

	return 0;
}