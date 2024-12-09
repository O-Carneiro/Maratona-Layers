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
    int n; cin >> n;
    string s;
    while(getline(cin, s)){
        int muhney = 0;
        cout << s << '\n';
        for(char c : s){
            if(c == '{') muhney++;
            else if(c == '}') muhney--;
            if(muhney < 0) {
                cout << "N\n";
                return 0;
            }
        }
        if(muhney != 0){
            cout << "N\n";
            return 0;
        }
    }
    cout << "S\n";
    return 0;
}
