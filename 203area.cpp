#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请分别输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	
	int C = 0;
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout << "这个三角形的周长为：" << C << endl;
	}
	else
		cout << "这三边无法构成一个三角形\n";

	if( a == b ||( a == c) ||( b == c))
		cout << "这是一个等腰三角形\n";

	return 0;
}