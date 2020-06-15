#include<bits/stdc++.h>
#define long long int ll

using namespace std;

int main(){
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int arr[n];
		int i;

		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		sort(arr,arr+n);

		int mindiff=INT_MAX;
		for(i=0;i<n-1;i++)
			mindiff=min(abs(arr[i]-arr[i+1]),mindiff);
		cout<<mindiff<<endl;

	}

	return 0;
}