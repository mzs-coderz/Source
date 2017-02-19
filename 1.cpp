#include <iostream>
using namespace std;

int main(){
    unsigned long long int T,i,A;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>A;
        cout<<"Case "<<i<<": ";
        if(A%3==0&&A%5!=0){
            cout<<"Fizz\n";
        }
        else if(A%3!=0&&A%5==0){
            cout<<"Buzz\n";
        }
        else if(A%3==0&&A%5==0){
            cout<<"FizzBuzz\n";
        }
        else{
            cout<<"Null\n";
        }
    }
    return 0;
}
