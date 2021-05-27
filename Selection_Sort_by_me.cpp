#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAX 100

class SelectionSort{
    public:
	int arr[MAX], n, temp;

	void input(){
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
	}

    void sort(){
        for(int i = 0; i < n-1; i++){
            int min = i, temp;
            for(int j = i+1; j < n; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            if(min != i){
                swap(arr[i],arr[min]);
            }
        }
    }

    void output(){
		cout << "sorted array is : ";
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
	}
};

int main(){
    SelectionSort s;

    s.input();
    s.sort();
    s.output();

    return 0;
}