#include <stdio.h>

int main()
{
    // Evaluation of expression is executed from left to right, top to bottom
    // printf("Evaluation of 100%20 <= 20-5 + 100%10 - 20 == 5 >= 1!= 20 is %d", 100 % 20 <= 20 - 5 + 100 % 10 - 20 == 5 >= 1 != 20);
    // a+=b*c-=5 a =3, b =5, c = 8
    int a = 3;
    int b = 5;
    int c = 8;
    printf("Evaluation of a+=b*=c-=5 is %d", a+=b*=c-=5);
    return 0;
}

// Break up expressions
// Consider order of precedence
// Expression is operand1 operator operand2
// 1 %
// 2 + -
// 3 <=, ==
// 4 !=

// 100%20 => 0
// 100%10 => 0
// 20-5 => 15
// 5+0 => 5
// 20-5 => 15
// 15-20 => -5
// 0<=-5 => false 0
// 5>=1 => true 1
// 0==1 => false 0
// 0!=20 => true 1

// 100%20<=20-5+100%10-20==5>=1!=20
// 0<=20-5+0-20==5>=1!=20
// 0<=20-5-20==5>=1!=20
// 0<=15-20==5>=1!=20
// 0<=-5==5>=1!=20
// 0==5>=1!=20
// 0==1!=20
// 0!=20
// 1

// a =3, b =5, c = 8
//a+=b*=c-=5
// Right to left
//+=, -=, *=
// c-=5 => 8-5 3
// a+=b*=c-=5
// b*=3 => 5*3 15
// a+=b*=3
// a+=15
// a=a+15 => 3+15 18
// a=18

// 18

