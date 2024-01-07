#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

 long long maxSubarraySum(int arr[], int n){
        long long sum =  0;
        long long maxi = arr[0];
        
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            maxi = max(sum, maxi);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
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

    cout << maxSubarraySum(arr, n);

    return 0;
}