#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    string str;
    cin >> str;
    
    int cnt = 0;
    char colors[] = {'R', 'G', 'B'};
    rep(i, 1, n) {
        if(str[i] == str[i-1]) {
            cnt++;
            for(char ch: colors) {
                if(ch != str[i-1] && ch != str[i+1]) {
                    str[i] = ch;
                    break;
                }
            }
        }
    }

    print(cnt);
    print(str);
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
