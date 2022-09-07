#include <stdio.h>

#define A 65
#define Z 90
#define a 97
#define z 122

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];  // 0 - 9 => 48 - 57 in ascii
    int nUalpha[26]; // A - Z
    int nLalpha[26]; // a - z

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    for (c = 0; c < 26; ++c)
    {
        nUalpha[c] = 0;
        nLalpha[c] = 0;
    }
    /* for (c = 97; c <= 122; ++c)
       nLalpha[c] = 0; */
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else if (c >= 'A' && c <= 'Z') // B
            ++nUalpha[c - 'A'];        // 66 -  65 = 1 => nualpha[1] = nualpha + 1 = 0 + 1 = 1
        else if (c >= 'a' && c <= 'z')
            ++nLalpha[c - 'a'];
        else
            ++nother;
    }

    printf("Count of digits\n");
    // digits
    for (i = 0; i < 10; ++i)
        printf("%d th count is %d\n", i, ndigit[i]);

    printf("Count of alphabets\n");
    
    // alphabets
    for (c = 0; c < 26; ++c)
    {
        char alpha = c + A;
        printf("%c - %d\n", c + A, nUalpha[c]);
        // printf("%c - %d\n", alpha, nUalpha[c]);
        // printf("%c - %d\n", (char)(c + A), nUalpha[c]);
    }

    for (c = 0; c < 26; ++c)
    {
        printf("%c - %d\n", (char)(c + a), nLalpha[c]);
    }

    printf("white space = %d, other = %d\n", nwhite, nother);
}