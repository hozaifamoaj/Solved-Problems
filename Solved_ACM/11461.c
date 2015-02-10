#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,d,i;
    while(scanf("%d %d",&a,&b)==2){
        if(a==0&&b==0)break;
        d=0;
        for(i=a;i<=b;i++){
            int an=sqrt(i);
            if(i==(int)sqrt(i)*(int)sqrt(i)) d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
