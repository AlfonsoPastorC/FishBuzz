#include <iostream>
using namespace std;

int main() {
	int i, j = 1, k = 1, m = 0, n = 0 , ñ = 0;
	int fizz[100];
	int buzz[100];
	int fizzbuzz[100];

	for (i = 1; i <= 100; i++) {
		if ((j == 3) && (k == 5)) {
			cout << "Fizzbuzz"<< endl;
			j = 1;
			k = 1;
			fizz[m] = i;
			m++;
		}else if (j == 3){
			j = 1;
			cout << "Fizz" << endl;
			buzz[n] = i;
			n++;
		}else if (k == 5) {
			k = 1;
			cout << "Buzz" << endl;
			fizzbuzz[ñ] = i;
			ñ++;
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