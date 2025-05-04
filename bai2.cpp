#define nametask "248"
#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define SZ(a) (int) a.size()
#define all(a) a.begin(), a.end()
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)

using namespace std;
typedef long long ll;
typedef pair <int, int> pi;
const int N = 249;

int n;
int a[N];
int dp[N][N];

void solve(){
    cin >> n;
    FOR(i, 1, n){
        FOR(j, 1, i) dp[j][i] = -1;
    }
    int ans = 1;
    FOR(i, 1, n) {
        cin >> a[i];
        dp[i][i] = a[i];
        ans = max(ans, a[i]);
    }
    FOR(i, 1, n){
        FOD(j, i - 1, 1){
            FOR(k, j, i - 1){
                if (dp[j][k] != -1 && dp[j][k] == dp[k + 1][i]) dp[j][i] = dp[j][k] + 1;
            }
            ans = max(ans, dp[j][i]);
        }
    }
    cerr << ans << '\n';
    cout << ans;
}

signed main()
{
 
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
