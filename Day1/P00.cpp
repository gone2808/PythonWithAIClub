#include <bits/stdc++.h>
#define ll long long
const int MaxN=1e5+5;
const ll MOD = 1e9+7;
using namespace std;
ll n;
ll F[3][3],M[3][3];
ll qM(ll x){
    return x%MOD;
}
void MUL(ll f[3][3],ll m[3][3]){
    ll x= (qM( qM(f[1][1])*qM(m[1][1])  ) + qM( qM(f[1][2]) * qM(m[2][1]) ) )%MOD;
    ll y= (qM( qM(f[1][1])*qM(m[1][2])  ) + qM( qM(f[1][2]) * qM(m[2][2]) ) )%MOD;
    ll z= (qM( qM(f[2][1])*qM(m[1][1])  ) + qM( qM(f[2][2]) * qM(m[2][1]) ) )%MOD;
    ll t= (qM( qM(f[2][1])*qM(m[1][2])  ) + qM( qM(f[2][2]) * qM(m[2][2]) ) )%MOD;
    F[1][1]=x;
    F[1][2]=y;
    F[2][1]=z;
    F[2][2]=t;
}
void quick_Pow(ll f[3][3], ll n){
    if(n<=1) return;
    quick_Pow(f,n/2);
    MUL(f,f);
    if(n&1) MUL(f,M);
}

void Solve(){
    F[1][1] = F[1][2]=F[2][1]=1;
    F[2][2] = 0;
    M[1][1] = M[1][2]=M[2][1]=1;
    M[2][2] = 0;

    cin >> n;
    if(n==0) cout<<0;
    else{
        quick_Pow(F,n-1);
        cout<<F[1][1];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int T;
    // cin >> T;
    // while(T--)
        Solve();
    return 0;
}