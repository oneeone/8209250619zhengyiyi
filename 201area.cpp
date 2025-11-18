#include<iostream>
using namespace std;
int main()
{
	char i;
	cout << "Please input a letter:\n";
	cin >> i;

	if (i >= 'a' && i <= 'z')
	{
		i = i - 32;
		cout << i << endl;
	}
	else
		cout << static_cast<int>(i) << endl;
	return 0;
}