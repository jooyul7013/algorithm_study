/*
10951번 A+B -4
두 수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A,B < 10)
각 테스트 케이스마다 A+B를 출력한다.

*/

#include <cstdio>

int main()
{
	int A, B;
	
	while(scanf("%d %d", &A,&B)==2)
	{
		printf("%d\n",A+B);
	}
	return 0;
} 
