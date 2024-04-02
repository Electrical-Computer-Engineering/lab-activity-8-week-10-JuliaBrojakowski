
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Look HerE";
	char str2[] = "Look Here";
	char str3[] = "Look Here";
	char str4[] = "Look Her";

	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str2, str3));
	printf("%d\n", strcmp(str3, str4));

	return 0;
}