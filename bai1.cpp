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
const int N = 2005;

string s;
int n;
bool palin[N][N];
int f[N][N];

void solve(){
    cin >> s;
    n = SZ(s);
    s = ' ' + s;
    memset(palin, 0, sizeof palin);
    FOR(i, 1, n){
        palin[i][i] = palin[i + 1][i] = 1;
    }
    FOR(i, 1, n){
        FOR(j, 1, i - 1){
            if (s[i] == s[j]) palin[j][i] = palin[j + 1][i - 1];
        }
    }
    FOR(i, 1, n){
        int cnt = 0;
        FOD(j, i, 1){
            cnt += palin[j][i];
            f[j][i] = f[j][i - 1] + cnt;
        }
    }
    int q;
    cin >> q;
    FOR(i, 1, q){
        int l, r;
        cin >> l >> r;
        cout << f[l][r] << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
