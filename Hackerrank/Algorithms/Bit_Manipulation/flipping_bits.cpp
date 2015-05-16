#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num,i;
    unsigned int l;
    scanf("%d",&num);
    for(i=0;i<num;i++){
      scanf("%u",&l);
      printf("%u\n",~l);
    }
    return 0;
}
