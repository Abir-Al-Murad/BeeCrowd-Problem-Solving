#include<iostream>
using namespace std;
int main(){
    int z = 2002;
test:
    int x;
    cin>>x;
    if(x!=z){
        cout<<"Senha Invalida"<<endl;

        goto test;
    }else{
        cout<<"Acesso Permitido"<<endl;
    }





return 0;
}
