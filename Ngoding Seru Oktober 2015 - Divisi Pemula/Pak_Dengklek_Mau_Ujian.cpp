#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;
    if(n < 0 || n > 100){
        cout << "TIDAK" << endl;
    }else{
        cout << "YA" << endl;
    }

    return 0;
}