//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

// link : https://cses.fi/problemset/task/1755



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

    string s;
    cin >> s;
    int a[27] = {0};

    for (int i = 0; i < sz(s); ++i)
    {
        a[s[i] - 64]++;
    }
    vector<char>x;
    vector<char>y;
    vector<char>z;

    int count = 0;

    for (int i = 1; i < 27; ++i)
    {
        if (a[i] % 2 == 1)
            count++;
        if (count == 2)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }

    int time = 0;
    for (int i = 1; i < 27; ++i)
    {
        if (a[i] % 2 == 0)
        {
            int temp = a[i] / 2;
            for (int j = 0; j < temp; ++j)
            {
                char ch = 64 + i;
                x.pb(ch);
                y.pb(ch);
            }
        }
        else
        {
            time++;
            if (time == 1) {
                f = 0;
            }
            for (int j = 0; j < a[i]; ++j)
            {
                char ch = 64 + i;
                z.pb(ch);
            }
        }
    }
    for (int i = 0; i < x.size(); ++i)
    {
        cout << x[i];
    }
    for (int i = 0; i < z.size(); ++i)
    {
        cout << z[i];
    }
    for (int i = y.size()-1; i >= 0; --i)
    {
        cout << y[i];
    }


    


    return 0;
}
