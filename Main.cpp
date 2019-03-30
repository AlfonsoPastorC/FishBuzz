#include <iostream>
using namespace std;

int main() {
	int i, j = 1, k = 1;

	for (i = 1; i <= 100; i++) {
		if ((j == 3) && (k == 5)) {
			cout << "Fizzbuzz"<< endl;
			j = 1;
			k = 1;
		}else if (j == 3){
			j = 1;
			cout << "Fizz" << endl;
		}else if (k == 5) {
			k = 1;
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
			k++;
			j++;
		}
		
	}
	cin >> k;
	return 0;
}