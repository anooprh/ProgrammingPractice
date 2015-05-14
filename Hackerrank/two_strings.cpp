#include <iostream>
#include <inttypes.h>
#include <string>
#include <vector>
using namespace std;
int main(){
  uint32_t T,i; cin >> T;
  bool flag;
  while(T--){
    string s1, s2;
    vector<bool> a1(26,false);
    cin >> s1 >> s2;
    flag = false;
    for(i = 0 ; i < s1.length(); i++)a1[s1[i]-'a'] = true;
    for(i = 0 ; i < s2.length(); i++){
      if(a1[s2[i]-'a']) {
	flag = true;break;
      } 
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}
