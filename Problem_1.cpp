#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int hour, total;
	char pack;
	cout << "Which package did you purchased? (Type the Package letter)\nPackage A\nPackage B\nPackage C\n";
	cin >> pack; 
	switch (pack){
		case 'A':
		case 'a':
			cout << "How many hours did you used this package?\n";
				cin >> hour;
				if (hour <= 10) {
					cout << "The total amount due is P995.";
				}
				else {
					total = 995 + ((hour - 10) * 20);
					cout << "The total amount due is P" << total << ".";
				}
				break;
		case 'B':
		case 'b':
			cout << "How many hours did you used this package?\n";
			cin >> hour;
			if (hour <= 20) {
				cout << "The total amount due is P1495.";
			}
			else {
				total = 1495 + ((hour - 20) * 10);
				cout << "The total amount due is P" << total << ".";
			}
			break;
		case 'C':
		case 'c':
			cout << "How many hours did you used this package?\n";
			cin >> hour;
			cout << "The total amount due is P1995.";
			break;
		default :
			cout << "You must pick among packages A to C.\n";
}
	system("pause");
	return 0;
}