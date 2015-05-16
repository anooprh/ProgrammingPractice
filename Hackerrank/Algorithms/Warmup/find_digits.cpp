#include<iostream>
#include<inttypes.h>

using namespace std;

int main(){
  unsigned T,ans,dig; cin >> T;
  uint64_t N,Nb;
  while(T--){
    cin >> N; Nb = N; ans = 0;
    while(N > 0){
      dig = N % 10;
      if(dig != 0 && Nb%dig==0)ans++;
      N = N / 10;
    }
    cout << ans << endl;
  }
  return 0;
}
