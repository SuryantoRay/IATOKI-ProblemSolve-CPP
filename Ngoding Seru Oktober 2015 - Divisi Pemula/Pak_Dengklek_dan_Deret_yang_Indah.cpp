#include <iostream>

using namespace std;

int main(){
    int So,n,d;
   
    cin >> So >> n >> d;
    int hasil = So;

    for (int i=0; i<n; i++){
        cout << hasil << endl;
        hasil = hasil + d;
    }

    return 0;
}