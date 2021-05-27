#include <iostream>
#include <bits/stdc++.h> 

using namespace std; 

#define MAX 100

void sort(int arr[], int n){
	if (n == 1)
    	return;

		for (int i=0; i<n-1; i++){
			if (arr[i] > arr[i+1])
				swap(arr[i], arr[i+1]);
		}
		sort(arr, n-1);
}

int main(){
	int n, arr[MAX];

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