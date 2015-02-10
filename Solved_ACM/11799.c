#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,c,i,j=1,num,ans=0;
    scanf("%d\n",&n);
    while(n--){
        ans=0;
        scanf("%d ",&c);
        for(i=0;i<c;i++)
        {
            scanf("%d ",&num);
            if(num>ans)
                ans=num;
        }
        printf("Case %d: %d\n",j,ans);
        j++;
    }
    return 0;
}
