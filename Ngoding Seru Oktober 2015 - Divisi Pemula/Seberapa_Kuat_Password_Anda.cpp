#include <iostream>
#include <string>

using namespace std;

int main(){
    string pass;
    int hBesar = 0, hKecil = 0, angka = 0, karakter = 0, panjang = 0; 

    cin >> pass;

    for(int i = 0; i < pass.length(); i++){
        if(pass[i] >= 97 && pass[i] <= 122){
            hKecil++;
            panjang++;
        }else if(pass[i] >= 65 && pass[i] <= 90){
            hBesar++;
            panjang++;
        }else if(pass[i] >= 48 && pass[i] <= 57){
            angka++;
        }else{
            karakter++;
        }
    }

    if(hKecil > 0 && hBesar > 0 && angka > 0 && pass.length() >= 8 && karakter > 0){
        cout << "Kuat" << endl;
    }else if(panjang >= 12){
        cout << "AgakKuat" << endl;
    }else{
        cout << "Lemah" << endl;
    }

    return 0;
}