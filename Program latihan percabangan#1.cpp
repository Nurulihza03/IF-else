#include<iostream>
using namespace std;
int main(){
    int x, y, hasil;
    string proses;
    cout<<"Masukkan nilai X : ";cin>>x;
    cout<<"Masukkan nilai Y : ";cin>>y;
    cout<<"daftar simbol operator : "<<endl;
    cout<<"+ = penjumlahan"<<endl;
    cout<<"/ = pembagian"<<endl;
    cout<<"* = perkalian"<<endl;
    cout<<"- = pengurangan"<<endl;
    cout<<"Masukkan simbol operator : ";cin>>proses;
    if (proses == "+"){
        hasil=x+y;
        cout<<"Hasil penjumlahan : "<<hasil<<endl;
    }
    else if (proses == "/"){
        hasil=x/y;
        cout<<"Hasil pembagian : "<<hasil<<endl;
    }
    else if (proses == "*"){
        hasil=x*y;
        cout<<"Hasil perkalian : "<<hasil<<endl;
    }
    else if (proses == "-"){
        hasil=x-y;
        cout<<"Hasil pengurangan : "<<hasil<<endl;
    }
    else {
        cout<<"Anda tidak memilih"<<endl;
    }
    cout<<"program ini adalah program operator sederhana"<<endl;
    return 0;
}

