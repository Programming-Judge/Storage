//time limit exceeded
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

    int allneg = 1;
    for(ll i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            allneg = 0;
            break;
        }
    }

    if(allneg)
    {
        ll maxEl = a[0];
        for(ll i=0; i<n; i++)
            maxEl = (a[i] > maxEl) ? a[i] : maxEl;
        cout<<maxEl<<"\n";
    }

    ll maxSubarraySum = 0;
    for (ll i = 0; i < n; i = i + 1)
    {  
        ll subarraySum = 0;
        for (int j = i; j < n; j = j + 1)
        { 
            subarraySum = subarraySum + a[j];
            
            if (subarraySum > maxSubarraySum)
                maxSubarraySum = subarraySum;
        }
    }
    cout<<maxSubarraySum<<"\n";
    return 0;
}