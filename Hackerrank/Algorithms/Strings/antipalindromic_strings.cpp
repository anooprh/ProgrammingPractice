#include<iostream>#include<inttypes.h>#include<unordered_map>#define MOD 1000000007using namespace std;uint64_t modpow(uint64_t x, uint64_t y) {  uint64_t R=1;  while (y){    if (y & 1ll)      R=(R*x)%MOD;    x=(x*x)%MOD;  y>>=1; } return R;}int main(){  uint32_t T; cin >> T;  uint64_t N,M,ans,prefix;  while(T--){    cin >> N >> M;    ans = 1;    if(N==1)ans=M % MOD;    else if(N==2)ans = M*(M-1) % MOD;    else {      prefix = M*(M-1) % MOD;      if(prefix == 0) ans = 0;      else {	ans = prefix * modpow(M-2, N-2) % MOD;       }    }    cout << ans << endl;  }    return 0;}