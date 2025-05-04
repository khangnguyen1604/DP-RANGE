#define nametask ""
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
const int N = 105;

int n;
int a[N];
ll f[N][N];

void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n){
        f[i][i + 1] = 0;
        FOR(j, i + 2, n) f[i][j] = 1e18;
    }
    FOR(i, 1, n){
        FOD(j, i - 2, 1){
            FOR(k, j + 1, i - 1){
                f[j][i] = min(f[j][i], f[j][k] + f[k][i] + a[i] * a[k] * a[j]);
            }
        }
    }
    cout << f[1][n];
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
