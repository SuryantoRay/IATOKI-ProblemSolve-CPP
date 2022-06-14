#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    if(a <= 10 && b <= 40 && c <=90){
        cout << "S" << endl;
    }else if(a <= 14 && b <= 60 && c <= 120){
        cout << "M" << endl;
    }else if(a <= 18 && b <= 80 && c <= 180){
        cout << "L" << endl;
    }else{
        cout << "X" << endl;
    }

    return 0;
}