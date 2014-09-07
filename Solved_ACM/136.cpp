#include <stdio.h>
#include <math.h>

int main() {
    int p2,p3,p5;
    int a,b,c,i;
    int ugly[1500];
    ugly[0]=1;
    p2=p3=p5=0;
    for(i=1;i<1500;i++)
    {
        a=2*ugly[p2];
        b=3*ugly[p3];
        c=5*ugly[p5];
        if(a<=b&&a<=c)
        {
            ugly[i]=a;
            p2++;
        }
        if(b<=a&&b<=c)
        {
            ugly[i]=b;
            p3++;
        }
        if(c<=a&&c<=b)
        {
            ugly[i]=c;
            p5++;
        }
    }
    printf("The 1500'th ugly number is %d.\n", ugly[1499]);
  return 0;
}
