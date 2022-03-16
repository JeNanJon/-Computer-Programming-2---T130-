#include<stdio.h>
int main()
{
    float value,convertedvalue;
    char tempscale,convertedscale=0;
      printf("Temperature Converter\nscales(c)celcius,(k)kelvin,(f)fahrenheit");
      printf("\nInput Original Temperature Value:");
      scanf("%f",&value);
      printf("Select original scale:");
      scanf("\n%c",&tempscale);

      printf("Select converted temperature scale:");
      scanf("\n%c",&convertedscale);
      if(tempscale=='c'){
        if(convertedscale=='f'){
          convertedvalue = value*9/5+32;
        }
        else if(convertedscale=='k'){
          convertedvalue = value+273.15;
        }
        else{
          printf("%c is Invalid Input", convertedscale);
        }
      }
      else if (tempscale=='k'){
        if (convertedscale=='c'){
          convertedvalue = value-273.15;
        }
        else if (convertedscale=='f'){
          convertedvalue = (value-273.15)*9/5+32;
        }
        else{
          printf("%c is Invalid Input", convertedscale);
        }
      }
      else if (tempscale=='f'){
        if(convertedscale=='c'){
          convertedvalue = (value-32)*5/9;
        }
        else if (convertedscale=='k'){
          convertedvalue = (value-32)*5/9+273.15;
        }
         else{
          printf("%c is Invalid Input", convertedscale);
        }

      }
      printf("%.2f %c = %.2f %c",value,tempscale,convertedvalue,convertedscale);
      return 0;
}
