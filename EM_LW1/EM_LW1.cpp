// EM_LW1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"

using namespace std;
int main()
{
	srand(time(NULL));
	int n = 0;
	int a = -11;
	int b = 63;
	cout << "Integers in the range [" << a << "; " << b << "]" << endl;
	for (int i = 0; i < 50; i++) {
		n = rand() % (b - a + 1) + a;
		cout << n << '\t';
	}
	double n2 = 0;
	cout << '\n';
	double min = 0.1;
	double max = 21.2;
	cout << "Real numbers in the range (" << min << "; " << max << "]" << endl;
	cout.precision(3);
	cout.setf(ios::fixed, ios::floatfield);
	for (int i = 0; i < 50; i++) {
		n2 = (double)rand() / RAND_MAX * (max - min); //(0.1; 21.2]
		cout << n2 << '\t';
	}
	_gettch();
    return 0;
}

