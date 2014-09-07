#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int sum=0,t,a[1000],i;
        float c=0;
        cin>>t;
        for(i=0;i<t;i++){
            cin>>a[i];
            sum+=a[i];
        }
        float avg = sum/t;
        for(i=0;i<t;i++)
            if(avg<a[i]) c++;
        float ans = (float)(c/t)*100;
        printf("%.3f",ans);
        cout<<"%"<<endl;
    }
    return 0;
}
