#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int k;
    cin>>k;
    string s="";
    string c="codeforces";

    long long int num_each_chars=0,num_chars=0;
    num_each_chars=ceil(pow((double)k,0.1));
    num_chars=ceil((double)log(k)/(double)log(num_each_chars));
    int i,j,ptr=9;
    for(i=0;i<num_chars;i++,ptr--)
        for(j=0;j<num_each_chars;j++)
            s=c[ptr]+s;
    s=c.substr(0,ptr+1)+s;

    cout<<s<<endl;

    return 0;
}
