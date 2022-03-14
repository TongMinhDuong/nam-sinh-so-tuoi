#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ns;
	int a = 2022;
	int Age;
	char fullname[150];
	
	printf(" Hello...");
	scanf("%s", &fullname);
	fflush(stdin); 
	printf(" sinh nam :");
	scanf("%d", &ns);

	Age = a - ns;
	printf(" Age = %d", Age);
	
	return 0;
}
