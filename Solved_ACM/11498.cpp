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
    int i,x,y,xx,yy;
    while(scanf("%d",&i)==1){
        if(i==0)break;
        if(scanf("%d %d",&x,&y)==2)
            while(i--){
                if(scanf("%d %d",&xx,&yy)==2)
                    if(xx==x || yy==y) {printf("divisa\n");continue;}
                    if(xx>x && yy>y) {printf("NE\n");continue;}
                    if(xx<x && yy>y) {printf("NO\n");continue;}
                    if(xx<x && yy<y) {printf("SO\n");continue;}
                    if(xx>x && yy<y) {printf("SE\n");continue;}
            }
    }
    return 0;
}
