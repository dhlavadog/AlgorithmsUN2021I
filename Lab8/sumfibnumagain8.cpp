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

long long int sumfib(long long int n){
	long long int k;
    long long int secuencia[120];
    for(int i=0;i<120;i++)
    	{
    	secuencia[i]=grr(i);
    //std::cout<<secuencia[i]<<" ";
    	}
    k=n%120;
   //std::cout<<"\n***"<<secuencia[k]<<" ** "<<k<<"  "<<n;
    return(secuencia[k]);
	
	}

int main() {
	long long int x,y,total,parcial;
    std::cin >> x>>y;
    if(x==0){x=1;}
    if(x>y){std::cout<<0;exit(0);}
    total=sumfib(y);
    parcial=sumfib(x-1);
    //std::cout<<parcial<<"###";
    if(total-parcial<0){total=total+10;}
  /*  if(x==0&&y==0){cout<<0;}
    if(x==0,y==1){cout<<1;}
	if(total-parcial>0&&x!=0&&y!=1){std::cout<<total-parcial;}*/
	std::cout<<total-parcial;
   
           return(0);
    }
