#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    char k;
    int sim;

    cin >> a >> b >> c >> k;

    if(c >= b){
        if(c == b){
            sim = b;
            b = c;
            c = sim;
        }else{
            sim = b;
            b = c;
            c = sim;
        }
    }

    if(b >= a){
        if(b == a){
            a = a;
            b = b;
        }else{
            sim = a;
            a = b;
            b = sim;
        }
    }

    if(k == '0'){   
        cout << a << " " << b << " " << c << endl;
    }else if(k == '1'){
        cout << c << " " << b << " " << a << endl;
    }

    return 0;
}