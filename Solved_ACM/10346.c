#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,d,i;
    while(scanf("%d %d",&a,&b)==2){
        printf("%d\n",a+(a-1)/(b-1));
    }
    return 0;
}
