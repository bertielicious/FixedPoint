#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../fixed2Float.h"
#include "../float2Fixed.h"
#include "../int2Fixed.h"
#include "../fixed2Int.h"
#include "../mul.h"
#include "../div.h"
int main()
{
    /*CONVERT FLOATS TO FIXED POINT, AND FIXED POINT TO FLOATS*/
    int32_t  a,b;
    float f1, f2;
    a = float2Fixed(10.6, 16);
    f1 = fixed2Float(a, 16);
    b = float2Fixed(2, 16);
    f2 = fixed2Float(b, 16);
    printf("f1 %f1\n", f1);
    printf("f2 %f2\n", f2);
    printf("f1 + f2 %f\n", f1 + f2);

    int32_t c = 5;
    int32_t d;
    d = int2Fixed(c, 16);
    printf("d %d\n", d);


    int32_t e;
    e = fixed2Int(d, 16);
     printf("e %d\n", e);

     /*MULTIPLY FLOATS*/

   int32_t balls;
   int32_t fF2;
   int32_t g;
   balls = float2Fixed(4.5, 16);  // convert floating point inputs to fixed point
   fF2 = float2Fixed(3.142, 16);
   g =  mul(balls,fF2 ,16);         // multiply the two fixed point arguments
   float f3;
   f3 = fixed2Float(g, 16);         // convert the result f3 from fixed point to float
   printf("f3 = %f\n", f3);


    /* DIVIDE FLOATS - max range numerator and denominator is 255*/
    float result;
    int32_t p1;
    int32_t p2;
    p1 = float2Fixed(255.175, 16);// convert floating point inputs to fixed point
    p2 = float2Fixed (255, 16);// convert floating point inputs to fixed point
    result = divide(p1, p2, 16);  // divide the two fixed point arguments
    result = fixed2Float(result,16);// convert the result from fixed point to float
    printf("%f\n", result);
}
