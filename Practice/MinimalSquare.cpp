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
		int a,b;
		cin>>a;
		cin>>b;
		int result;

		int side=min(max(a,2*b),max(2*a,b));

		result=side*side;
		cout<<result<<endl;
		
	}

	return 0;
}