#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, C, x, D;
	cout << "Type the value of A";
	cin >> A;
		if (A == 0) {
		cout << "Type new value of A, not equal 0";
		cin >> A;
	} 
	cout << "Type the value of B";
	cin >> B;
	cout << "Type the value of C";
	cin >> C;
	D = (B*B) - 4*A*C;
	if (D < 0) {
		cout << "No valid roots";
	} else {
		cout << "A quadratic equation  A*(x*x) + B*x + C = 0 has roots"<< endl;
	}
	}
