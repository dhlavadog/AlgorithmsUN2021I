#include <iostream>
#include<math.h>
using namespace std;


long long int fibonacci(long long int n){
	float k;
	float raiz5;
	raiz5=pow(5,0.5);
	k=(1/raiz5)*(pow(((1+raiz5)/(2)),n)-pow(((1-raiz5)/(2)),n));
	return (k);
}

int main() {
	long long int n, m,k=1,residuo1,residuo2,residuo3; 
	cin >> n >> m;
	if(fibonacci(n)<m&&fibonacci(n)>0){
		//cout<<fibonacci(n);
		cout<<n;
	}
	else{
	while(fibonacci(k)<=m){
		//cout<<fibonacci(k)<<"\t"<<k<<"\n";
		k++;
	}
	residuo1=fibonacci(k-1)%m;
	residuo2=fibonacci(k)%m;
	//cout<<k<<"\n";
		while(k<n){
		residuo3=residuo1+residuo2;
		residuo3=residuo3%m;
		residuo1=residuo2;
		residuo2=residuo3;
		k++;
		//cout<<residuo3<<"\t";
	}
//	residuo1=fibonacci(k)%m;
//	residuo2=fibonacci(k+1)%m;
	cout << residuo3<< endl;
}}
