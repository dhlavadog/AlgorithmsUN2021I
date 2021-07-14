#include <iostream>

using namespace std;

int grr(int n) {
    if (n <= 1)
        return n;
    int uno = 0;
    int dos  = 1;
    for (int i = 0; i < n - 1; ++i) {
        int temporal = uno;
        uno = dos;
        dos = temporal + dos;
        if(dos>9){
        	dos=dos%10;
        }
    }
    return dos;
}

int main() {
    int n,ultimodigito;
    cin >> n;
    cout << grr(n)<< '\n';
    }
