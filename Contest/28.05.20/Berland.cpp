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
		int n,m,k;
		cin>>n;
		cin>>m;
		cin>>k;

		int noofcards=n/k;
		int result;
		if(m<=noofcards)
			result=m;
		else
		{
			int numJokersrem=m-noofcards;
			int secondHighest=numJokersrem/(k-1);
			int rem=numJokersrem%(k-1);
			if(rem)
				secondHighest++;
			result=noofcards-secondHighest;
		}
		cout<<result<<endl;
		
	}

	return 0;
}