#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int c[100000];
        int j=0;
        for(int i=0; i<n;i++){
            c[i] = a[i];
        }
        for(int i=n; i< n+m; i++){
            c[i] = b[j++];
        }
        
        sort(c, c+n+m);
        
        int count=1;
        for(int i=1; i<n+m; i++){
            if(c[i] != c[i-1]){
                count++;
            }
        }
        return count;
}

int main(){
    int n;
    cout << "Enter the size of the 1st array: ";
    cin >> n;
    int m;
    cout << "Enter the size of the 2nd array: ";
    cin >> m;

    int a[n];
    cout << "Enter elements of the 1st array: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int b[m];
    cout << "Enter elements of the 2nd array: ";
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int ans = doUnion(a,n,b,m);

    cout << "Total element after union is " << ans << endl;

    return 0;
}