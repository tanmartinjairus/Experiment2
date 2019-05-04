#include <iostream>
#include <conio.h>
using namespace std;
	int main()
	{
	int sum = 0, x;
	int n = sum;
	do
	{
	cout << "Enter a whole number: ";
	cin >> n;
		if (n <= 0)
		{
		cout << "Thank you!";
		break;
		}
		for (int x = 0; x <= n; x++)
		{
		sum += x;
		}
		cout << "The sum of whole numbers from 1 to " << n << " is " << sum << endl;
		sum = 0;
	} while (n != 0);
	system("pause");
	return 0;
}