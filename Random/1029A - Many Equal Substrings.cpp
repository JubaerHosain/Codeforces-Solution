#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string ans = s;
    int cnt = 1, pos = 1;
    while(cnt < k) {
        if(pos >= ans.size()) {
            ans += s;
            cnt++;
        } else {
            bool flag = true;
            int len = 0;

            rep(i, 0, n) {
                if(pos+i >= ans.size()) break;
                len++;
                if(ans[pos+i] != s[i]) flag = false;
            }
            
            if(flag) ans += s.substr(len), cnt++;
        }
        pos++;
    }

    print(ans);
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
