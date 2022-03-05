#include<stdio.h>
#include<strings.h>

int ft_strlen(char *str);

int main(void)
{
	char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %lu \n",strlen(a));
    printf("Length of string b = %lu \n",strlen(b));
	return 0;
}
