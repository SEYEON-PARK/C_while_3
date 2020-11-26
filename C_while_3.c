#include <stdio.h>

int main(void)
{
	char name[30];
	printf("이름을 입력하시오. : ");
	scanf_s("%s", name, sizeof(name));

	int i = 0;
	while (name[i] != 0) //0대신 NULL을 넣어도 된다.
	{
		printf("%c", name[i]);
		i++;
	}
	printf("\n");
	printf("%s", name);

	return 0;
}