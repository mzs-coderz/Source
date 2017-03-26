#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int T,N,i,j,A[50000],v[50000]={},k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        printf("Case %d: ",T);
        for(j=0;j<N;j++){
            scanf("%d",&A[j]);
        }
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                if(A[j]<A[k]){
                    v[j]++;
                }
            }
        }
        for(j=0;j<N;j++){
            v[j]++;
            printf("%d ",v[j]);
        }
        for(j=0;j<N;j++){
            v[j]=0;
        }
        cout<<"\n";
    }
    return 0;
}
