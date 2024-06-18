
#include<iostream>
using namespace std;

int main(){
    retu:
    int M,N;
    cin>>M>>N;
    int sum=0;
    if(M>0 && N>0){
        if( M>N){
            for(int i =N;i<=M;i++){
                cout<<i<<" ";
                sum = sum+i;
        }
        cout<<"Sum="<<sum<<endl;
    }else{
        for(int i =M;i<=N;i++){
            cout<<i<<" ";
            sum = sum+i;
        }
        cout<<"Sum="<<sum<<endl;

    }
        goto retu;

    }else{

    }




return 0;
}
