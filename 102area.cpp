#include<iostream>
using namespace std;
int main()
{
	cout << "请输入圆锥底的半径：" << endl;
	int r = 0;
	cin >> r;

	cout << "请输入圆锥的高：" << endl;
	int h = 0;
	cin >> h;

	const float PI = 3.14;
	float V = 0;
	V = (static_cast<float>(1) / 3) * PI * r * r * h;

	cout << "这个圆锥的体积是：\n" << V;
	return 0;

}