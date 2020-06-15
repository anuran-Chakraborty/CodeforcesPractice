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
		int n,m,result;
		cin>>n;
		cin>>m;

		if(n%2==0 && n%2==0)
			result=(n/2)*m;
		else if(n%2==0 && m%2==1)
			result=(m-1)/2*n+(n/2);
		else if(m%2==0 && n%2==1)
			result=(n-1)/2*m+(m/2);
		else
			result=(m-1)/2*n+(n+1)/2;
		cout<<result<<endl;

		
	}

	return 0;
}