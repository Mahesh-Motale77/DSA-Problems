#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        
        int ans = arr[n-1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;
        int mini, maxi;
        
        for(int i=0; i<n; i++){
            mini = min(smallest, arr[i+1] - k);
            maxi = max(largest, arr[i] + k);
            
            if(mini < 0) continue;
            
            ans = min(ans, maxi-mini);
        }
        return ans;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int k;
    cout << "Enter the key: ";
    cin >> k;

    int arr[n];
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << getMinDiff(arr, n, k);


    return 0;
}