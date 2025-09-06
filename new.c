#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the value: ");
    scanf("%d", &a);

    if (a >= -10 && a < 0)
    {
        b = 0;
    }
    else if (a >= 0 && a < 15)  
    {
        b = 1;
    }
    else if (a >= 15)
    {
        b = 2;
    }
    else if (a < -10)
    {
        b = 3;
    }

    switch (b)
    {
    case 0:
        a = a + 7;
        break;
    case 1:
        a = (a * a) + (3 * a) + 5;
        break;
    case 2:
        a = (a * a * a) + (2 * 5) + 9;
        break;
    case 3:
        a = (a * a * a * a) + (9 * (a * a)) + 13; 
        break;
    }

    printf("%d \n", a);

    return 0;
}
