#include <stdio.h>

int check()
{
    static int count = 0;
    count++;

    if(count > 3)
        return 0;

    int password;
    printf("비밀번호: ");
    scanf("%d", &password);

    return (password == 1234);
}

int main(void)
{
    int passed = 0;
    int n = 1;

    while(n <= 3){
        if(check()){
            passed = 1;
            break;
        }

        n++;
    }

    if(passed)
        printf("로그인 성공!!\n");
    else
        printf("로그인 시도횟수 초과\n");

	return 0;
}