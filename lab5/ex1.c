#include <string.h>

void reserve(char s[])
{
    
}

void back(char s[],int i,int m)
{
    int c,j;
    j = m - (i + 1);
    if (i < j){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}