#include <stdio.h>

int is_leap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int main(void)
{
    int year;
    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if(is_leap(year))
        printf("%d년은 366일입니다.\n", year);
    else
        printf("%d년은 365일입니다.\n", year);

	return 0;
}