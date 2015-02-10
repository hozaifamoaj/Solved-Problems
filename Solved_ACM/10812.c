#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    float n, a, b,s1,s2;
    scanf("%f",&n);
    while(n--){
        scanf("%f %f",&a,&b);
        s1=(a+b)/2;s2=(a-b)/2;
        if(s1!=(int)s1||s2!=(int)s2||s1<0||s2<0) printf("impossible\n");
        else printf("%d %d\n",(int)s1,(int)s2);
    }
    return 0;
}
