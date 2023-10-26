#include "BigInteger.h"

/*
PIYUSH PAL
SEC B
CLASS ROLL NO: 42
UNIVERSITY ROLL NO: 2021349
*/

int main()
{
    char str[101];
    struct BigInteger a,b,c;
    while(1)
    {
        printf("ENTER THE DATA\n");
        fgets(str,100,stdin);
        a=initialize(str);
        printf("ENTER THE DATA\n");
        fgets(str,100,stdin);
        b=initialize(str);
        c=mod(a,b);
        printf("\na: \t");
        display(a);

        printf("\nb: \t");
        display(b);

        printf("\nOUTPUT:\n");
        display(c);
        dump(a);
        dump(b);
        dump(c);
    }
    
}

/*
PIYUSH PAL
SEC B
CLASS ROLL NO: 42
UNIVERSITY ROLL NO: 2021349
*/
