#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <stack>
#include <ctype.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdbool.h>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    unsigned long n;
    while(scanf("%lu",&n)){
        if(n==0)
            break;
        while(1){
            if(n<10){
                break;
            }
            else{
                n=n%10+n/10;
            }
        }
        printf("%lu\n",n);
    }
    return 0;
}
