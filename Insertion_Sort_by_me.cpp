#include <iostream>

using namespace std;

#define MAX 100

/*void sort(){
	for(int i = 1; i < n; i++){
        temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}*/

void sort(int arr[], int n){
	if (n <= 1)
    	return;
	sort( arr, n-1 );
	int nth = arr[n-1];
	int j = n-2;
	while (j >= 0 && arr[j] > nth){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = nth;
}

int main(){
	int n, arr[MAX], temp;

	cout << "enter size of array : ";
	cin >> n;

	if(n > MAX || n < 0){
		cout << "invalid index";
		exit(0);
	}

	cout << "enter elements : ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr,n);

	cout << "sorted array is : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}