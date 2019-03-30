#include <iostream>
using namespace std;

int main() {
	int i, j = 1, k = 1 , m =0 , n = 0 , ñ = 0 ;
	int fizz[100];
	int buzz[100];
	int fizzbuzz[100];

	for (i = 1; i <= 101; i++) {
		if ((j == 3) && (k == 5)) {
			cout << "Fizzbuzz"<< endl;
			j = 1;
			k = 1;
			fizzbuzz[m] = i;
			m++;

			fizz[n] = i;
			n++;

			fizzbuzz[ñ] = i;
			ñ++;


		}else if (j == 3){
			j = 1;
			k++;
			cout << "Fizz" << endl;
			fizz[n] = i;
			n++;

		}else if (k == 5) {
			k = 1;
			j++;
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