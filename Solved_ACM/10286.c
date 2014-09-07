#include<stdio.h>
int main()
{
    double n,a;
    n=1.0673956817111818692592637626711;
    while(scanf("%lf",&a)==1){
        printf("%.10lf\n",a*n);
    }
    return(0);
}
