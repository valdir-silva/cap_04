#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    int num=1;

    for(; num<=5; num++)
    {
        printf("%d\n", 3*num);
    }

}
