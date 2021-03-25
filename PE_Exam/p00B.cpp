#include <bits/stdc++.h>
#define ll long long
#define fileio freopen("inp.inp", "r", stdin), freopen("out.out", "w", stdout);
#define SPEED ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int MaxN = 1e5 + 5;
const int MOD = 1e9 + 7;
using namespace std;


long long steps_to_zero(long long x ,long long y){
    if(x<y) return 1;
    int res=0;
    if(y==1){
        y++;
        res++;
    }
    while((x/y)>=2){
        res++;
        y++;
        x/=y;
    }
    y--;
    res--;

    while(floor(1.0*x/y)>1){
        x/=y;
        res++;
    }
    return res+2;
}

signed main()
{
    SPEED;
    int x,y;
    cin >> x >> y;
    cout<<steps_to_zero(x,y);
}
    