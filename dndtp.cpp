#include <windows.h>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstring>
using namespace std;
char str[128];
string http;
int main()
{
	srand(time(NULL));
	int a = rand()%(3001)+1000;
	sprintf(str,"explorer \"https://www.luogu.org/problemnew/show/%d\"",a);
	system(str);
	return 0;
}
