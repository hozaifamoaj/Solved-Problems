#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,amp,fre,a,b,c,i=1;
    scanf("%ld", &n);
    while(i<=n){
        scanf("%d\n%d", &amp,&fre);
        for(c=1;c<=fre;c++)
        {
           for(a=1;a<=amp;a++){
                for(b=1;b<=a;b++)
                    printf("%d",a);
                printf("\n");
            }
            for(a=amp-1;a>0;a--){
                for(b=a;b>0;b--)
                    printf("%d",a);
                printf("\n");
            }
            if((i==n&&c==fre))
                continue;
            printf("\n");
        }

        i++;
    }

    return 0;
}

