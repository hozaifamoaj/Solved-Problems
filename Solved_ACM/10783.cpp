#include <iostream>
using namespace std;

int main () {
  int m,n,x,t,ans,c;
  cin>>t;
  c=0;
  while(t--){
    c++;
    ans=0;
    cin>>m;
    cin>>n;
    if(m%2==0) x=m+1;
    else x=m;
    int i;
    for(i=x;i<=n;i+=2){
        ans+=i;
    }
    cout<<"Case "<<c<<": "<<ans<<endl;
  }
  return 0;
}
