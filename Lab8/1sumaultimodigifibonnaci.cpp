#include <iostream>

using namespace std;

int grr(long long int n) {//Solo vale esta función para valores pequeños.
    if (n <= 2)
        return n;
    int uno=1,dos=2,salida;
    for (long int i=1; i<n-1;i++){
    	salida=(uno+dos+1);
    	if(salida>=1000){salida=salida-1000;}
    	uno=dos;
    	dos=salida;
    }
    return(salida%10);
    
    
}

int main() {
    long long int n,k;
    int secuencia[120];
    cin >> n;
    for(int i=0;i<120;i++){
    	secuencia[i]=grr(i);
    }
    k=n%120;
    cout<<secuencia[k];
        return(0);
    }
   
