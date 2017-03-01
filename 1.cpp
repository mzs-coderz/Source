#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int T,i,len,len2;
    char str[128],sbstr[128],*pos;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>str>>sbstr;
        pos=strstr(str,sbstr);
        len=strlen(str);
        len2=strlen(pos);
        cout<<len-len2<<"\n";
    }
    return 0;
}
