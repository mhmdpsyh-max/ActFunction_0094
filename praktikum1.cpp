#include<iostream>
using namespace std;

    float p,l;

void Input (){
    cout << "Masukkan Panjangg :" ;
    cin >> p;
    cout << "Masukkan Luass :" ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}

int Jumlah(int x, int y, int z){
    return x+y+z;
}

void Output (){
    cout<< "Hasilnya = " << LuasPersegi(p,l) << endl;  
}

int main(){
    Input();
    Output();
}