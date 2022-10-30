#include<iostream>

using namespace std;

int BCNN(int a, int b) {
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	if (a == 0) return 0;
	if (b == 0) return 0;
	
	int result = a;
	
	while(true) {
		if (result % a == 0 && result % b == 0) {
			return result;
		} else {
			result++;
		}
	}
}

int main() {
	cout << BCNN(-1,0) << endl;
	cout << BCNN(-1,0) << endl;
	cout << BCNN(0,-1) << endl;
	cout << BCNN(2,-2) << endl;
	cout << BCNN(1,2) << endl;
	cout << BCNN(3,3) << endl;
	cout << BCNN(1,3) << endl;
	cout << BCNN(1,2) << endl;
}
