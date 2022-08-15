// link : https://cses.fi/problemset/task/1092

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



vector<int>v;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a = n * (n + 1) / 2;

    if (a % 2 == 1)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        if (n % 2 == 0)
        {
            vi s1 , s2;
            for (int i = 0; i < (n / 2); ++i)
            {
                if (i % 2 == 0) {
                    s1.pb(i + 1);
                    s1.pb(n - i);
                }
                else
                {
                    s2.pb(i + 1);
                    s2.pb(n - i);
                }
            }
            cout << s1.size() << endl;
            out(s1);
            cout << s2.size() << endl;
            out(s2);
        }
        else
        {
            vi s1 , s2;
            int i;
            for (i = 2; i <= (n / 2); ++i)
            {
                if (i % 2 == 0) {
                    s1.pb(i);
                    s1.pb(n - i + 2);
                }
                else
                {
                    s2.pb(i);
                    s2.pb(n - i + 2);
                }
            }
            s1.pb(i);s2.pb(i+1);s1.pb(1);
            cout << s1.size() << endl;
            out(s1);
            cout << s2.size() << endl;
            out(s2);
        }

    }


    return 0;
}
