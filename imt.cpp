#include<iostream>
#include<iomanip>
using namespace std;
string kategori;
float berat, tinggi, imt;
int main() {
    cout<<"Penghitung Indeks Massa Tubuh"<<endl;
    cout<<"Masukkan berat badan Anda(kg)"<<endl;
    cin>>berat;
    cout<<"Masukkan tinggi Anda(cm)"<<endl;
    cin>>tinggi;
    imt=berat/((tinggi/100)*(tinggi/100));
    cout<<"IMT: "<<setprecision(3)<<imt<<endl;
    if(imt<18.5) {
        kategori="Berat Badan Kurang";
    }
    else if(imt>=18.5&&imt<25) {
        kategori="Berat Badan Ideal";
    }
    else if(imt>=25&&imt<30) {
        kategori="Berat Badan Lebih";
    }
    else if(imt>=30&&imt<40) {
        kategori="Gemuk";
    }
    else if(imt>=40) {
        kategori="Sangat Gemuk";
    }
    cout<<"Kategori: "<<kategori;
}