#include<iostream>
#include<inttypes.h>
#include<string>
#include<vector>

using namespace std;

// This is not yet complete
int main(){
  uint64_t T;cin >> T;
  int i0, i1, l0, l1;
  string s0, s1, s, last=0;
  vector<char> q;
  while(T--){
    cin >> s0 >> s1;
    s = "";
    q.clear();
    i0=0; i1=0; l0=s0.length(); l0=s0.length();
    while(i0 < l0 || i1 < l1){
      if(q.size() > 0){
	
      } else if(i1 >= l1 || s0[i0] < s1[i1]){
	s+=s0[i0++];
	last = 0;
      } else if(i0 >= l0 || s0[i0] > s1[i1]){
	s+=s1[i1++];
	last = 1;
      } else{
	q.push_back(s0[i0])
      }
    }
    cout << s << endl;
  }

  return 0;
}
