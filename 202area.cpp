#include<iostream>
using namespace std;
int main()
{
	float x = 0;
	cout << "请输入一个x的值：\n";
	cin >> x;

	float y=0;
	if (0 < x && x < 1)
		y = 3 - 2 * x;

	else if (x >= 1 && x < 5)
		y = static_cast<float>(2) / 4 * x + 1;

	else if (x >= 5 && x < 10)
		y = x * x;

	else
		cout << "x不符合取值范围\n";

	cout << "y=" << y;
	return 0;
}