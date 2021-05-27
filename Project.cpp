//MEDIUM LEVEL QUESTION FROM WWW.TECHIEDELIGHT.COM
//Problem -> Check if an Array is Formed by Consecutive Integers
//Given an array of integers, check if it is formed by consecutive numbers

#include <iostream>

using namespace std;

//Macro defination for size of array
#define MAX 100

class ConsecutiveArray
{
//defined publically so that we can access the members outside the class.
public:
    
    //Array declaration
    int arr[MAX];
    int n, i, j, temp;

    void input()
    {
        //Total number of elements to read in array
        cout << "Enter total number of elements to read: ";
        cin >> n;

        //Checking boundary conditions
        if (n < 0 || n > MAX)
            cout << "Input valid range!!!" << endl;

        else
        {
            //Reading n elements
            cout << "Enter elements : ";
            for (i = 0; i < n; i++)
                cin >> arr[i];
        }
    }

    //MAIN LOGIC
    void sort()
    {
        //Sorting - ASCENDING ORDER(), Time Complexity = O(n^2) because of 2 "for loops"
        for(i=0;i<n;i++)
	        {		
		        for(j=i+1;j<n;j++)
		        {
			        if(arr[i]>arr[j])
			        {
                        //Swapping the 2 values currently comparing
				        temp  =arr[i];
				        arr[i]=arr[j];
				        arr[j]=temp;
			        }
		        }
	        }

        //Print sorted array elements(Checking if array got sorted or not)
        cout << "Sorted (Ascending Order) Array elements:" << endl;
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    //Checking if the array contains consecutive numbers
    void isConsecutive()
    {
        int count = 0;

        //Comparing each element with next one and then increasing the count (Most important step)
        for (int i = 0; i < n; i++)
        {
            if(arr[i+1] - arr[i] == 1)
            {
                count++;
            }
        }

        //It is observed if array contains consecutive numbers then final value of count is always equal to (n-1)th index of the array
        if(count == n-1)
            cout << "Array contains consecutive numbers";

        else
            cout << "Array doesn't contains consecutive numbers";
    }
};


//Main function with return type int
int main()
{
    //Constructing object of ConsecutiveArray class
    ConsecutiveArray obj;

    obj.input();
    obj.sort();
    obj.isConsecutive();
    
    return 0;
}