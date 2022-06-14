#include <iostream>

using namespace std;

int main(){
    int a,b;
    char c;

    cin >> a >> c >> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(j == i || j == a - i - 1){
                cout << b;
            }else{
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}