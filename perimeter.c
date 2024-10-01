#include <stdio.h>
#include <math.h>
int main()
{
    int l,b,perimeter;
    printf("enter the values of l,d:");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    printf("the perimeter is: %d",perimeter);
    return 0;
}
