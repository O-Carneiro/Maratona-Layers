#include <bits/stdc++.h>
#include <numeric>
#include <ostream>

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
    int n, d; cin >> n >> d;
    vll C, acc(n+1);
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        C.push_back(a);
    }
    acc[0] = 0;
    for(int i = 1; i <= n; i++){
        acc[i] = C[i-1] + acc[i-1];
    }
    int res = 0;
    for(int i : acc) cout << i << ' ';
    cout << '\n';
    for(int i = 1; i <= n; i++){
        int l = i, r = n;
        while(l <= r){
            int mid = (l+r)/2;
            if(acc[r] - acc[l-1] > d){
                l = mid + 1;
            }
            else if(acc[r] - acc[l-1] < d){
                r = mid - 1;
            }
            else {
                res++;
                break;
            }
        }
    }
    int total = accumulate(C.begin(), C.end(), 0);
    for(int i = 1; i <= n; i++){
        int l = i, r = n;
        while(l <= r){
            int mid = (l+r)/2;
            if(total - (acc[r-1] - acc[l]) > d){
                l = mid + 1;
            }
            else if(total - (acc[r-1] - acc[l]) < d){
                r = mid - 1;
            }
            else {
                res++;
                break;
            }
        }
    }
    cout << res << '\n';
    
    return 0;
}
