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

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,n,a;
    long int ans;
    scanf("%d",&i);
    while(i--){
        scanf("%d",&n);
        a=(((((n*567)/9)+7492)*235)/47)-498;
        if(a<0)a*=(-1);
        printf("%d\n",(a/10)%10);

    }
    return 0;
}
