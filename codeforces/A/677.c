#include <iostream>
using namespace std;
int main() {
	short Size, sum = 0, b;
	cin >> Size >> b;
	short a;
	while (Size--)
		sum++,cin >> a,
		(a <=b)?sum=sum:sum++;
	cout << sum;
	return 0;
}