#include <stdio.h>
#define A 65
#define Z 90
#define a 97
#define z 122
 
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];  // 0-9 => 48 - 57 in ASCII
    int nUalpha[26]; // A - Z => 65-90 in ASCII
    char nLalpha[26]; // a - z => 97-122 in ASCII
 
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }
 
    for (c = 0; c < 26; ++c)
    {
        nUalpha[c] = 0;
        // nLalpha[c] = 0;
    }

    for (c = 0; c < 26; ++c)
    {
        // nUalpha[c] = 0;
        nLalpha[c] = 0;
    }
 
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
 
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
 
        else if (c >= 'A' && c <= 'Z')
        {
            ++nUalpha[c - 'A'];
        }
 
        else if (c >= 'a' && c <= 'z')
        {
            ++nLalpha[c - 'a'];
        }
 
        else
            ++nother;
    }
 
    printf("\n\ncount of digits\n");
    // digits
    for (i = 0; i < 10; ++i)
    {
        printf("%d th count is %d\n", i, ndigit[i]);
    }
 
    printf("\n\ncount of alphabets\n");
    // alphabets
    for (c = 0; c < 26; ++c)
    {
        printf("%c-%d\n", (char)(c + A), nUalpha[c]);
    }
    for (c = 0; c < 26; ++c)
    {
        printf("%c-%d\n", (char)(c + a), nLalpha[c]);
    }
    printf("\nwhite space = %d, \n\nother = %d\n", nwhite, nother);
}
