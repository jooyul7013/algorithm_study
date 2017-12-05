/*
11719번
입력 받은 대로 출력하는 프로그램을 작성하시오. 
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
각 줄은 100글자를 넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.
*/

#include <cstdio>
#include <cstring>
int main()
{
	char s[101];
	for(int i= 0; i<100; i++)
	{
		fgets(s,101,stdin);
		s[strlen(s)-1] = '\0';
		printf("%s\n",s);
	}
	return 0;
}
