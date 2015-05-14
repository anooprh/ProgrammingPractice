#include <iostream>
#include <inttypes.h>
using namespace std;

int main(){
  uint64_t T,K; cin >> T;
  bool isOdd;
  while(T--){
    cin >> K;
    isOdd = K & 1;
    cout << (isOdd ? (K/2)*(K/2 + 1) : (K/2)*(K/2)) << endl;
  }
  return 0;
}
