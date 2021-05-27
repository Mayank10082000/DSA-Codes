//Iterative method
#include<iostream>

using namespace std;

int main()
{
    int n, s, temp1, lb=0, ub=n, mb, arr[n];
    cout<<"enter size of array : "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            } 
        }
    }
    
    cout<<"enter number for search"<<endl;
    cin>>s;

    while(ub>lb){
        mb=(lb+ub)/2;
        if(arr[mb]==s){
            cout<<"element found";
            break;
        }

        else if(arr[mb]>s){
            ub=mb-1;
        
        }
        else if(arr[mb]<s){
            lb=mb+1;
        }
    }

    if(lb > ub){
        cout<<"not found";
    }

    return 0;
}


//Recursive method
/*#include<iostream>
using namespace std;
int binary(int arr[],int lo,int up,int search){
    int m=(lo+up)/2;
    if(lo<up){
        if(arr[m]==search){
            return 1;
        }

        else if(arr[m]>search){
            up=m-1;
            binary(arr,lo,up,search);
        }

        else if(arr[m]<search){
            lo=m+1;
            binary(arr,lo,up,search);
        }
    }

    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter lenght of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" Element\n";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

    int search;
    cout<<"Enter Element for search\n";
    cin>>search;

    if(binary(arr,0,n-1,search)==1){
        cout<<"ELEMENT FOUND\n";
    }

    else{
        cout<<"ELEMENT NOT FOUND\n";
    }
}*/


//My method
/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100

void input(){
    int arr[MAX], n, temp, temp1, left = 0, right = n - 1, mid = 0;

    cout << "enter size of array : ";
    cin >> n;

    if(n > MAX || n < 0){
        cout << "invalid size";
        exit(0);
    }

    cout << "enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){		
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				temp1 = arr[i];
				arr[i] = arr[j];
				arr[j] = temp1;
			}
		}
	}

    cout << "sorted array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    while(left <= right){
        mid = (left + right) / 2;

        if(temp == arr[mid]){
            cout << "element found at index : " << mid;
        }

        if(temp < arr[mid]){
            right = mid - 1;
        }

        if(temp > arr[mid]){
            left = mid + 1;
        }

        if(left > right){
            cout << "number not found";
        }
    }
}

int main(){
    input();
    //binsearch();
    return 0;
}*/