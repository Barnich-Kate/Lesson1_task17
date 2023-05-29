#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int x1, y1, x2, y2;
	cout << "Type value of x1";
	cin >> x1;
	cout << "Type value of y1";
	cin >> y1;
	cout << "Type value of x2";
	cin >> x2;
	cout << "Type value of y2";
	cin >> y2;
	if ((x1-x2)<= 1 && (y1-y2)<=1) {
		cout <<" True";
	}
	else {
		cout << "False";
	}
}
    
