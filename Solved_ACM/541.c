#include<stdio.h>
int main()
{
    int n, a[100][100],row,col;
    while(1){
        row=0,col=0;
        scanf("%d",&n);
        if(n==0) break;
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++){
            int s=0;
            for(j=0;j<n;j++) s+=a[i][j];
            if(s%2==1 && row==0) row=i+1;
            else if(s%2==1 && row!=0) row=-1;
        }
        for(i=0;i<n;i++){
            int s=0;
            for(j=0;j<n;j++) s+=a[j][i];
            if(s%2==1 && col==0) col=i+1;
            else if(s%2==1 && col!=0) col=-1;
        }
        if(row==0 && col==0) printf("OK\n");
        else if(row==-1 || col==-1) printf("Corrupt\n");
        else printf("Change bit (%d,%d)\n",row,col);
    }
    return(0);
}
