#include <stdio.h>

main()
{
    float celsius,fahr;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=5;
    
    celsius=upper;
    while (fahr <= upper ){
        celsius =(5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
