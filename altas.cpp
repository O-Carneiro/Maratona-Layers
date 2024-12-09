#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

signed main(){
    MAC0214 muito coxa
    int n, k; cin >> n >> k;
    int log = 0;
    while(n){
        log++;
        n/=2;
    }
    cout << log << '\n';
    return 0;
}
