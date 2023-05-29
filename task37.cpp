#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int x1, y1, x2, y2;
	cout << "Type the coordinats of x1";
	cin >> x1;
	if (x1 > 1 && x1 < 8) {
	return 0;
	} else {
		cout << "You tyoe wrong number, please, write number from 1 to 8";
		cin >> x1;
	}
	cout << "Type the value of y1";
	cin >> y1;
	if (y1 > 1 && y1 < 8) {
	return 0;
	} else {
		cout << "You tyoe wrong number, please, write number from 1 to 8";
		cin >> y1;
	}
	cout << "Type the value of x2";
	cin >> x2;	
	if (x2 > 1 && x2 < 8) {
	return 0;
	} else {
		cout << "You tyoe wrong number, please, write number from 1 to 8";
		cin >> x2;
	}
	cout << "Type the value of y2";
	cin >> y2;	
	if (y2 > 1 && y2 < 8) {
	return 0;
	} else {
		cout << "You tyoe wrong number, please, write number from 1 to 8";
		cin >> y2;
	}
	if ((x1-x2)<= 1 && (y1-y2) <=1) {
		cout << "True";
	}
	else {
		cout << "False";
	}
