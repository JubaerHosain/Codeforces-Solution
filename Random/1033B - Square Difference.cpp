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
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
bool prime(ll n) {
    for(ll i = 2; i*i <= n; i++) 
        if(n%i == 0) return false;
    return true;
}

void solve() {
    ll a, b;
    cin >> a >> b;

    if(a-b == 1 && prime(a+b)) {
        print("YES");
    } else {
        print("NO");
    }
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
