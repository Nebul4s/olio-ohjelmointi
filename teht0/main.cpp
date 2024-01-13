#include <iostream>

using namespace std;

void kertoma(int);

int main()
{

    kertoma(11);
    return 0;
}


void kertoma(int num) {
    if(num > 10){
        cout<<"Luku on liian iso";
    }else if(num < 1){
        cout<<"Ei voida laskea";
    }else{


    long result = num;
    for(int i = num - 1; i > 0; i--){
        result = result * i;
    }

    cout<<result<<endl;
        }
}
