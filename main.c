#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main()
{
    int num;
    printf("Introduzca un nunero: ");
    scanf("%d", &num);
    printf("%d!=%d", num, factorial(num));
    return 0;
}

int factorial(int num)
{
    if(num<1){
            return 0;
    }
    else if(num==1)
        {
        return 1;
        }
    else
        {
    return num*factorial(num-1);
        }
}
