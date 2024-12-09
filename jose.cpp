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
    int v, a, f, p; cin >> v >> a >> f >> p;
    vll contas;
    contas = {a,f,p};
    sort(contas.begin(),contas.end());
    int cont = 0;
    for(int i : contas){
        if(i < v){
            cont++;
            v -= i;
        }
    }
    cout << cont << '\n';
    return 0;
}
