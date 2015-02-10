#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        if(((a*a)+(b*b))==(c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
            printf("right\n");
        else if(a<=0||b<=0||c<=0) printf("wrong\n");
        else printf("wrong\n");
    }
    return 0;
}
