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
		int i,h,c,t;
		cin>>h;
		cin>>c;
		cin>>t;

		int upper=t;
		int lower=1,mid,pos;
		double arr[upper+1];
		double minDiff=INT_MAX;
		arr[1]=h;
		minDiff=fabs(t-arr[1]);
		pos=1;
		for(i=2;i<=upper;i++)
		{
			if(i%2==0)
				arr[i]=(arr[i-1]+c)/2;
			else
				arr[i]=(arr[i-1]+h)/2;
			cout<<arr[i]<<" ";
			if(fabs(t-arr[i])<minDiff)
			{
				minDiff=fabs(t-arr[i]);
				pos=i;
			}
			else if(fabs(t-arr[i])>minDiff)
				break;

		}
		cout<<pos<<endl;
		
	}

	return 0;
}