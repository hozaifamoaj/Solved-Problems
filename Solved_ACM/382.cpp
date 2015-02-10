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

    int n,i,mid,ans;
    printf("PERFECTION OUTPUT\n");
    while((scanf("%d",&n)==1)&&(n!=0)){
        ans=0;
        mid=n/2;
        for(i=1;i<=mid;i++){
            if(n%i==0){
                ans+=i;
            }
        }
        if(n>ans) printf("%5d  DEFICIENT\n",n);
        else if(n<ans) printf("%5d  ABUNDANT\n",n);
        else printf("%5d  PERFECT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
