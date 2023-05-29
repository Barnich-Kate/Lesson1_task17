#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, C;
	cout << "Type the value of A";
	cin >> A;
	cout << "Type the value of B";
	cin >> B;
	cout << "Type the value of C";
	cin >> C;
	if (B > A && B < C ) {
		cout << "B is true" << B;
	} else {
		cout << "Wrong";
	}
}
