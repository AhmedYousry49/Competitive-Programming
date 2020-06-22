#include <stdio.h>
using namespace std;
int n,a;
char s[100005];
int main()
{
    scanf("%d %s",&n,&s);
	for(char* it = s; *it!='\0'; ++it)//	for (char& c : s)
		if (*it == 'A')
			a++;
	if (a * 2 == n)
        puts("Friendship");
	else if (a * 2 > n)
      puts("Anton");
	else
		  puts("Danik");
	return 0;
}
