#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


void rotate(int arr[], int n)
{
        reverse(arr, arr+(n-1));
        reverse(arr, arr+n);
        return;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rotate(arr,n);
    printArray(arr, n);

    return 0;
}