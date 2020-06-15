#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--)
	{
		int n,i;
		cin>>n;

		map<int,int> freq;
		ll count=0;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(freq.find(arr[i])==freq.end())
				freq.insert(make_pair(arr[i],1));
			else
				freq[arr[i]]++;
		}

		map<int,int>::reverse_iterator it;

		for(it=freq.rbegin();it!=freq.rend();it++)
		{
			if(it->first>n)
				//Remove it
				n-=it->second;
		}


		cout<<n+1<<endl;

	}

	return 0;
}