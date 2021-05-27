#include<iostream>

using namespace std;

#define MAX 100

class linearsearch{
    public:
    int arr[MAX], n, temp, found = 0;

    void search(){
        cout << "enter size of array : ";
        cin >> n;

        if(n > 100 || n < 0){
            cout << "invalid size";
            exit(0);
        }

        else{
            cout << "enter elements : ";
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }

            while(true){
                cout << "enter element to search (-1 to exit) : ";
                cin >> temp;
                
                if(temp == -1){
                    break;
                }

                for(int i = 0; i < n; i++){
                    if(arr[i] == temp){
                        cout << "element found at index : " << i << endl;
                        found = 1;
                    }
                }
                
                if(found == 0){
                    cout << "element not found" << endl;
                }
            }
        }
    }
};

int main(){
    linearsearch s;
    s.search();
    return 0;
}