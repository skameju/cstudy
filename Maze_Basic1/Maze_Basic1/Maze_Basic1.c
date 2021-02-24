#include <stdio.h>
#include <conio.h>

int main(void)
{

    int nkey;
    while (1)
    {
        if (_kbhit())
        {
            nkey = _getch();
            printf("%d\n", nkey);
        }
    }
}
// 실행결과 : 입력한 키의 아스키 코드 값