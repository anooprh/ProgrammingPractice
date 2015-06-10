#include<iostream>
#include<inttypes.h>
#include<string>
#include<queue>

using namespace std;

// This is not yet complete
int main(){
  uint64_t T;cin >> T;
  int i0, i1, l0, l1, last;
  char val;
  string s0, s1, s;
  queue<char> q;
  while(T--){
    cin >> s0 >> s1;
    s = "";val = 0;last=-1;
    q = queue<char>();
    i0=0; i1=0; l0=s0.length(); l0=s0.length();
    while(i0 < l0 || i1 < l1){
      if(q.size() > 0){
	if(last == 0){
	  
	} else {

	}
	
      } else if(i1 >= l1 || s0[i0] < s1[i1]){
	val = s0[i0++];
	s+=val;
	last = 0;
      } else if(i0 >= l0 || s0[i0] > s1[i1]){
	val = s1[i1++];
	s += val;
	last = 1;
      } else{
	q.push(s0[i0]);
	  i0++; i1++;
      }
    }
    while(!q.empty()){
      s+=q.front();
      q.pop();
    }
    cout << s << endl;
  }

  return 0;
}
