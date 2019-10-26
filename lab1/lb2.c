#include <stdio.h>

main()
{
    int BitCount2(unsigned int n)
    
    {
        unsigned int c=0;
        while (n >0)
        {
            if ((n &1)==1)
            ++c;
            n >>=1;
        }
    return c;
    }
}

