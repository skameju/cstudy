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
// ������ : �Է��� Ű�� �ƽ�Ű �ڵ� ��