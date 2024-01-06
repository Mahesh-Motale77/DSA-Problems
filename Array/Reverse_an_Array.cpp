/*
#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}

int main(){
    int n;
    cout << "enter size of an array " << endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout << endl;
    cout << " Array after Reverse " << endl;
    printArray(arr,n);

    return 0;
}
*/


//-------------------- By recursion

#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    // base case
    if(start>=end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // recursive call
    reverseArray(arr, start+1, end-1);
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "enter size of an array " << endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout << endl;
    cout << " Array after Reverse " << endl;
    printArray(arr,n);
    return 0;
}

