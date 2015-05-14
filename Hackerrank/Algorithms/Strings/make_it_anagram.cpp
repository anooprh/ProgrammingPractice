#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

int main(){
  string s1, s2;
  int diff=0;
  cin >> s1 >> s2;
  vector<int> a1(26,0) ,a2(26,0);
  for(int i = 0 ; i < s1.length() ; i++)
    a1[s1[i]-'a']++;
  for(int i = 0 ; i < s2.length() ; i++)
    a2[s2[i]-'a']++;
  for(int i = 0 ; i < 26; i++){
    diff += abs(a1[i] - a2[i]);
  }
  cout << diff << endl;
}
