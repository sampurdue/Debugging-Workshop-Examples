#include<stdio.h>
void squeezer(char s[], char c[]);

main()
{
    squeezer("abcdefgabcdefgabcdefg", "abcd");
}
void squeezer(char s[], char c[])
{
    int i,j,k,z;
    for(k=0; c[k] != '\0'; k++) {
        for(i=j=0;s[i] != '\0';i++) {
            if (s[i] != c[k]) {
                s[j++] = s[i];
            }
        s[j] = '\0';
        }
    }


    for(z=0; z < j; z++)
        printf("%c",s[z]);
}
