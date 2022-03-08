#include <iostream> 

using namespace std;

long long Mul(long long x, long long y, long long m) { 
	if (!y) return 0; 
	long long ret = Mul(x, y / 2, m); 
	ret = (ret + ret) % m; 
	return y % 2 ? (ret + x) % m : ret; 
}

long long Pow(long long x, long long y, long long m) { 
	if (!y) return 1 % m; 
	long long ret = Pow(x, y / 2, m); 
	ret = Mul(ret, ret, m); 
	return y % 2 ? Mul(ret, x, m) : ret; 
}

int main() { 
	long long x, y, m; 
	cin >> x >> y >> m; 
	cout << Pow(x, y, m); 

	return 0; 
}

// Example: 1234567891011 4359348578925 9823528375982 
// Output: 4623743743377