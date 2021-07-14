#include <iostream>



using namespace std;

long long int P(long long int m) {
	long long int x = 0, y = 1, z = x + y; 
	for (int i = 0; i < m*m; i++) {
		z = (x + y) % m; 
		x = y; 
		y = z; 
		if (x == 0 && y == 1)
			return i + 1; 
	}
}
int Solucionar(long long int n, long long int m) {
	long long remain = n % P(m);

	long long first = 0;
	long long second = 1;

	long long res = remain;

	for (int i = 1; i < remain; i++) {
		res = (first + second) % m;
		first = second;
		second = res;
	}

	return res % m;
}
int main() {
	long long int n, m; 
	cin >> n >> m; 
	cout << Solucionar(n, m) << endl;
}
