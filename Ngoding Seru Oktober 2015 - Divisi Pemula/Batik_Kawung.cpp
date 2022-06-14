#include <iostream>

using namespace std;

int main(){
    int a,b;
    char c;

    cin >> a >> c >> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(i == 0 || i == a-1){
                if(j == 0 || j == a-1){
                    cout << b;
                }else{
                    cout << c;
                }
            }else if(i != 0 && i != a-1){
                if(j != 0 && j != a-1){
                    cout << b;
                }else{
                    cout << c;
                }
            }else{
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}