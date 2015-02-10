#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,a,b,c,i=1;
    scanf("%d\n",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        int ans=0;
        if((a>b&&a<c)||(a>c&&a<b)) printf("Case %d: %d\n",i,a);
        if((b>c&&b<a)||(b>a&&b<c)) printf("Case %d: %d\n",i,b);
        if((c>a&&c<b)||(c>b&&c<a)) printf("Case %d: %d\n",i,c);
        i++;
    }
    return 0;
}
