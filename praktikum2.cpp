#include<iostream>
using namespace std;

    float pe,el;

void Input (){
    cout << "Masukkkan Panjang :" ;
    cin >> pe;
    cout << "Masukkan Luas :" ;
    cin >> el;
}

float LuasPersegii(float x, float y){
    return x*y;
}


void Output (){
    cout<< "Hasilnya = " << LuasPersegii(pe,el) << endl;  
}

int main(){
    Input();
    Output();
}