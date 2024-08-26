#include <stdio.h>
    int main() {
      float c,f;
      printf("Enter temperature in Fahrenheit: ");
      scanf("%f",&f);
      c= (f - 32) * (5.0 / 9.0);
      printf("%f Fahrenheit is %f Celsius. ",f,c);
      return 0;
    }
