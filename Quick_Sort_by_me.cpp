#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAX 100

int arr[MAX], n;

int partition(int start, int end){
	int pivot = arr[start], i = start, j = end;
	while(i < j){
		do{i++;}
		while(arr[i] <= pivot);
		do{j--;}
		while(arr[j] > pivot);
		if(i < j){
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[start], arr[end]);
	return j;
}

void sort(int start, int end){
	if(start < end){
		int j = partition(start, end);
		sort(start, j);
		sort(j+1, end);
	}
}

int main(){
	
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

	sort(start, end);

	cout << "sorted array is : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

    return 0;
}