#include <cstdio>

int main()
{
	int x;
	int tmp;
	int total = 0;
	
	scanf("%d", &x);
	for(int i =0; i<x; i++)
	{
		scanf("%1d",&tmp);
		total += tmp;
	}
	printf("%d\n", total);
	return 0;
}
