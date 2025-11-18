#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个华氏温度：" << endl;
	float F = 0;
	cin >> F;

	const float PI = 5.0 / 9;
	float C =PI*(F - 32);
	cout << "则摄氏温度为：\n" << C;
	return 0;
}