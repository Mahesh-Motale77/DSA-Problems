/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void maxmin(int arr[], int size){
    sort(arr, arr+size);
    cout << "Minimun number is " << arr[0];
    cout << endl;
    cout << "Maximum number is " << arr[size-1];
    return;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
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

    printArray(arr, n);

    maxmin(arr, n);

    return 0;
}
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void minmax(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i< size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }

    cout << "Minimum number is " << mini << endl;

    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout << "Maximum number is " << maxi << endl;

}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
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

    printArray(arr, n);

    minmax(arr,n);

    return 0;
}