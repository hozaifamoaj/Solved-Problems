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
    int i,ans=0,n;
    char s[50];
    if(scanf("%d",&i)==1)
        while(scanf("%s",&s)==1 && i--){
            if(!strcmp(s,"donate")) {
                scanf("%d",&n);
                ans+=n;
            }
            else
                printf("%d\n",ans);
        }
    return 0;
}
