#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int i;
    while(getline(cin,str,'\n')){
        for(i=0;i<str.length();i++)
            cout<<char(str[i]-7);
        cout<<endl;
    }
return 0;
}
