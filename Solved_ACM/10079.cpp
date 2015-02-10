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

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    long long n;

    while(scanf("%lld",&n)==1){
        if(n<0) break;
        printf("%lld\n",(n*(n+1)/2)+1);
    }
    return 0;
}
