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
    int n;
    cin >> n;

    set<string> mid;
    map<string, string> mp;
    while(n--) { 
        string a, b;
        cin >> a >> b;
        mp[a] = b;
        mid.insert(b);
    }

    vector<pair<string, string>> ans;
    for(auto p: mp) {
        if(mid.count(p.first)) continue;

        string curr = p.second;
        while (mp.count(curr)) {
            curr = mp[curr];
        }
        
        ans.push_back({p.first, curr});
    }

    print(ans.size());
    for(auto p: ans) cout << p.first << " " << p.second << endl;
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
