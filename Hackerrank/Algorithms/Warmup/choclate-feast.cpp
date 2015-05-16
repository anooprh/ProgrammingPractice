#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int t,n,c,m,bal,temp;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
	answer = n/c;
	bal = answer;
	while(bal >= m){
	  temp = bal/m;
	  answer += temp;
	  bal -= temp*(m-1);
	}
        cout<<answer<<endl;
    }
    return 0;
}
