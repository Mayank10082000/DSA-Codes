#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
//finds max sub array sum
	int array[8] = {−1, 2, 4, −3, 5, 2, −5, 2};
	int best = 0;
	for (int a = 0; a < 8; a++) {
		int sum = 0;
		for (int b = a; b < 8; b++) {
			sum += array[b];
			best = max(best,sum);
		}

	}
	cout << best << "\n";

}


