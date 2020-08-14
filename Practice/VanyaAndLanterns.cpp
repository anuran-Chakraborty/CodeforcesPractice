#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,l;
    cin>>n;
    cin>>l;

    int arr[n];
    int i,j,d;

    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    //Find the max diff
    int maxdiff=2*max(arr[0]-0,l-arr[n-1]);
    for(i=0;i<n-1;i++)
        maxdiff=max(maxdiff,arr[i+1]-arr[i]);

    printf("%0.10f",maxdiff/2.0);


}