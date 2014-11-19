#include<stdio.h>
void squeezer(char s[], char c[]);

void main()
{
    char s1[] = "abcdefgabcdefgabcdefg";
    char s2[] = "abcd";
    squeezer(s1, s2);
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
    printf("\n");
}
