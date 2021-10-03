#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define fast  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
 
 
 
 
signed main()
{
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int n;  cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)  n=n/2;
        else    n=n*3 + 1;
        cout<<n<<" ";
    }
    cout<<endl;
}
