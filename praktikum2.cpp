#include<iostream>
using namespace std;

    float pe,l;

void Input (){
    cout << "Masukkkan Panjang :" ;
    cin >> pe;
    cout << "Masukkan Luas :" ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}


void Output (){
    cout<< "Hasilnya = " << LuasPersegi(pe,l) << endl;  
}

int main(){
    Input();
    Output();
}