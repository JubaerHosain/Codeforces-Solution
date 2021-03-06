#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return (a*b) / gcd(a, b);
}

void solve() {
    ll n;
    cin >> n;

    ll tmp = n;
    ll a = inf, b = inf;
    vector<ll> pf;
    for(ll i = 1; i*i <= tmp; i++) {
        ll x = i, y = n/i;
        if(lcm(x, y) == n) {
            if(max(a, b) > max(x, y)) {
                a = x, b = y;
            }
        }    
    }

    cout << a << " " << b;
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    cout << fixed << showpoint;
    cout << setprecision(9);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
