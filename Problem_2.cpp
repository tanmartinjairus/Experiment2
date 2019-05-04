#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int gal;
	double bal, con, amo;
	cout << "Water bill\nInput the number of gallons consumed:\n";
		cin >> gal;
			cout << "How much is the unpaid balance?\n";
			cin >> amo;
			if (amo <= 0) {
				con = (gal * 1.10) + 35;
				cout << "Your water bill is P" << con << ".";
			}
			else {
				con = (gal * 1.10) + 35;
				bal = con + 20;
				cout << "Your water bill is P" << bal << ".";
			}
	system("pause");
	return 0;
}