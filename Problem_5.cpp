#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int count, count0, count1=0, count2=1,count3;
	cout << "Fibonacci Numbers:";
	for (count = 0; count <= 1; count++)
	{
		cout << count << ", ";
	}
	for (count0 = 0; count0 <= 19; ++count0)
	{
		count3 = count1 + count2;
		count1 = count2;
		count2 = count3;
		cout << count3 << ", ";
}
	system("pause");
	return 0;
}