#include <iostream>
using namespace std;

int main(){

    int x,y;
    int soma;

    soma = 0;

    cin >> x >> y;

    if(x>y){
        for(int i=y+1; i<=x-1; i++){
            if(i%2!=0){
                soma +=i;
            }
        }
    }else if(y>x){
        for(int i=x+1; i<=y-1; i++){
            if(i%2!=0){
                soma +=i;
            }
        }
    }

    cout << soma << endl;

}