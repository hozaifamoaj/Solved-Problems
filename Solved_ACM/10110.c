#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    unsigned long n;

    while(1){
        scanf("%lu",&n);
        if(n==0)break;
        if(n==(int)sqrt(n)*sqrt(n))
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
