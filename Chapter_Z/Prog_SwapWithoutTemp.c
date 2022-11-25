#include <stdio.h>
int main()
{
    int var1, var2;
    printf("Enter two integersn");
    scanf("%d%d", &var1, &var2);
    printf("Before SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    printf("After SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
    return 0;
}

// var1 = 2, var2 = 5
// var1 = 2 + 5 = 7
// var2 = 7 - 5 = 2
// var1 = 7 - 2 = 5
