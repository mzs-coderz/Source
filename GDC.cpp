#include <iostream>
using namespace std;

int main(){
    int T,i,A,B,i2;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>A>>B;
        if(B%A==0){
            cout<<B<<"\n";
        }
        else{
            for(i2=B;i2>=1;i2--){
                if(A%i2==0&&B%i2==0){
                    cout<<i2<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}
