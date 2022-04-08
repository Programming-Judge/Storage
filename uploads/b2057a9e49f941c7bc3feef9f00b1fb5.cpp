//wrong answer
#include<iostream>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ll currSum = 0, maxSum = 0;

    for(ll i=0; i<n; i++)
    {
        if(a[i] + currSum > 0)
            currSum += a[i];
        else
            currSum = 0;
        
        if(currSum > maxSum)
            maxSum = currSum;
    }
    cout<<maxSum+1<<"\n";
    return 0;
}
