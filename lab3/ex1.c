#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[],int max);
int strrindex(char source[],char searchfor[]);

char pattern[] = "ould";

main()
{
    char line[MAXLINE];
    int found = 0;

    while (getlines(line, MAXLINE) > 0)
        if (strrindex(line, pattern) >= 0){
            printf("%s",line);
            found++;
        } else {
            printf("-1");
        }      
    return found++;
}

int getlines(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strrindex(char s[], char t[])
{
    int i, j, k, m;

    m = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            m = i;
    }
    return m;
}