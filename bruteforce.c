#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TARGET "loveu" 

void main()
{
    char word[5] = "-----";
    for (char c0 = 'a'; c0 <= 'z'; c0++)
    {
        word[0] = c0;
        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            printf();
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                word[2] = c2;
                for (char c3 = 'a'; c3 <= 'z'; c3++)
                {
                    word[3] = c3;
                    for (char c4 = 'a'; c4 <= 'z'; c4++)
                    {
                        word[4] = c4;
                        if ((strcmp(word, TARGET)) == 0)
                        {
                            printf("[+] Password Found ! \n");
                            printf("[=] Password is : %s", word);
                            exit(1);
                        }
                    }
                }
            }
        }
        printf("%s\n", word);
    }
}