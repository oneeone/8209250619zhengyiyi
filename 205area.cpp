#include<iostream>
using namespace std;
int main()
{
	char i=0;
	cout << "请输入字符" << endl;

	int a = 0, b = 0, c = 0, d = 0;
	while ( i != '\n')
	{
		i = cin.get();
		if ((i >= 65 && i <= 90)||(i>=97&&i<=122))
			a++;

		else if (i == 32)
			b++;

		else if (i >= 49 && i <= 57)
			c++;

		else
			d++;
	}

	cout << "中英文字母的个数为：" << a << endl;
	cout << "空格的个数为：" << b << endl;
	cout << "数字字符的个数为：" << c << endl;
	cout << "其他字符个数为：" << d << endl;

	return 0;
}