#include<stdio.h>
int main()
{
    int t,a[100],i,ans,c,l=1;
    while(scanf("%d",&t) && t){
        ans=c=0;
        for(i=0;i<t;i++){
            scanf("%d",&a[i]);
            ans+=a[i];
        }
        ans/=t;
        for(i=0;i<t;i++)
            if(a[i]>ans)
                c+=a[i]-ans;
        printf("Set #%d\nThe minimum number of moves is %d.\n",l++,c);
    }
    return(0);
}
