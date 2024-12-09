#include <bits/stdc++.h>
#include <numeric>

#define LAYERS std::ios_base::sync_with_stdio(false);
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
    LAYERS muito coxa
    int n; cin >> n;
    int l = 0, r = 0;
    vll fatias(n);
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        fatias[i] = a;
    }
    int maximo = 0; 
    int minimo = 1e9; 
    int sum = 0;
    while(r < n){
        sum += fatias[r];
        maximo = max(sum,maximo);
        r++;
        if(sum <= 0){
            sum = 0;
            l = r;
        }
    }
    l = 0, r = 0;
    sum = 0;
    while(r < n){
        sum += fatias[r];
        minimo = min(sum,minimo);
        r++;
        if(sum > 0){
            sum = 0;
            l = r;
        }
    }
    int acc = accumulate(fatias.begin(), fatias.end(), 0);

    cout << max(acc - minimo, maximo) << '\n';
    return 0;
}
