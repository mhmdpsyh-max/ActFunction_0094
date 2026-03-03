#include<iostream>
using namespace std;

    float p,l;

void Input (){
    cout << "Masukkan Panjangg :" ;
    cin >> p;
    cout << "Masukkan Luas :" ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}

int Jumlah(int a, int b, int c){
    return a+b+c;
}

void Output (){
    cout<< "Hasilnya = " << LuasPersegi(p,l) << endl;  
}

int main(){
    Input();
    Output();
}