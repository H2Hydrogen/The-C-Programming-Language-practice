#include <stdio.h>

main()
{
    int c;
    
    while ((c=getchar()) != EOF) {
        if (c=='\t')
            printf("\\t");
            printf("\\b");
        if (c=='\\')
            printf("\\\\");
        else
            putchar(c);
    }
}

