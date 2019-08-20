#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cin>>num;
        if(num%2==0){
            cout<<"Chetno"<<endl;
        }else{
            cout<<"Ne e chetno"<<endl;
        }

    }while(num!=100);
    return 0;
}
