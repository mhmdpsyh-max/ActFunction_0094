#include<iostream>
using namespace std;

    float p,l;

void Input (){
    cout << "Masukkkan Panjang :" ;
    cin >> p;
    cout << "Masukkan Luas :" ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}


void Output (){
    cout<< "Hasilnya = " << LuasPersegi(p,l) << endl;  
}

int main(){
    Input();
    Output();
}