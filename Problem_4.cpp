#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int count;
	cout << "Counting...\n";
	for (count=1;count<=9;count++)
	{cout << count << ", ";}
	for (count = 10; count <= 30; count+=2)
	{cout << count << ", ";}
	system("pause");
	return 0;
	getch();
}