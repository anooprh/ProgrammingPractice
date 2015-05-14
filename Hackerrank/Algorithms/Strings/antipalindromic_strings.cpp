#include<iostream>
#include<inttypes.h>

#define MOD 1000000007

using namespace std;

int main(){
  uint32_t T; cin >> T;
  uint64_t N,M,ans;
  while(T--){
    cin >> N >> M;
    ans = M;
    if(N > 1){
      ans = (ans*(M-1))%MOD;
    }
    if(N > 2){
      while(N-- - 2){
	ans = (ans * (M-2))%MOD;
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}
