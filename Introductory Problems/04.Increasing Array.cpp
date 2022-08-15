//  link  : https://cses.fi/problemset/task/1094

//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
 
 
using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
 
 
 
 
#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     even(x)         (x)%2
#define     inn             int n;cin>>n;
 
 
 
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;cin>>n;
    inv;
    ll count = 0 , sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if(v[i] < v[i-1]){
            count += abs(v[i-1]-v[i]);
            v[i]+=count;
            sum += count;
 
        }
        count=0;
    }
    cout << sum;
    
    return 0;
}
