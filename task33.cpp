#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int a, b, c;
	cout << "Type value of a";
	cin >> a;
	cout << "Type value of b";
	cin >> b;
	cout << "Type value of c";
	cin >> c;
	if (a+b > c && a+c > b && b+c >a) {
		cout <<" It is a triangle";
	}
	else {
		cout << "It is not a triangle";
	}

}
