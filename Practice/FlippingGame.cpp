#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int copy[n];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            copy[i] = -1;
        else
        {
            copy[i] = 1;
        }
    }

    int start_pos = 0, new_start=0, end_pos = 0, max_sum=INT_MIN, max_here=0;

    for(i=0;i<n;i++)
    {
        // cout<<max_sum<<" "<<max_here<<" "<<new_start<<" "<<start_pos<<" "<<end_pos<<endl;
        max_here+=copy[i];
        if(max_sum<max_here){
            max_sum=max_here;
            start_pos=new_start;
            end_pos=i;
        }
        if(max_here<0)
        {
            max_here=0;
            new_start=i+1;
        }
    }
    // cout<<max_sum<<" "<<max_here<<" "<<new_start<<" "<<start_pos<<" "<<end_pos<<endl;
    max_sum=0;
    //Count remaining ones
    for(i=0;i<start_pos;i++)
        if(arr[i]==1)
            max_sum++;

    for(i=start_pos;i<=end_pos;i++)
        if(arr[i]==0)
            max_sum++;

    for(i=end_pos+1;i<n;i++)
        if(arr[i]==1)
            max_sum++;
    cout<<max_sum<<endl;

    return 0;
}