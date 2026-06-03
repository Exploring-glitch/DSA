#include <iostream>
using namespace std;

int main() {
    int N = 4;
    char ch = 'A';
    for (int i = 0; i < N; i++){
        for(int j = 1; j < N - i; j++){
            cout << " ";
        }
        for(int x = 0; x <= i; x++){
            cout << char('A' + x);
        }
        for(int y = ch+i; y >'A'; y--){
            cout << char(y - 1);
        }
        cout << endl;
    }
    return 0;
}