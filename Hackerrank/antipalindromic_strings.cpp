#include<iostream>
#include<inttypes.h>

#define MOD 1000000007

using namespace std;

int main(){
  uint32_t T; cin >> T;
  uint64_t N,M,ans;
  while(T--){
    cin >> N >> M;
    ans = M%MOD * (M-1)%MOD;
    while(N-- - 2){
      ans = (ans * M)%MOD; 
    }
    cout << ans << endl;
  }
  
  return 0;
}
