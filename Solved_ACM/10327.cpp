#include<iostream>
using namespace std;
int main()
{
    int n,a[1010],i,j,tmp;
    while(cin>>n){
        int c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
            for(j=1;j<n;j++){
                if(a[j-1]>a[j]){
                    tmp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=tmp;
                    c++;
                }
            }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
