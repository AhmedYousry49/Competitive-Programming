#include <stdio.h>
using namespace std;
int main() {
	short Size, sum = 0, b;
	scanf("%d %d",&Size,&b);
	short a;
	while (Size--)
		sum++,scanf("%d",&a),
		(a <=b)?sum=sum:sum++;
	printf("%d",sum);
	return 0;
}
