#include<stdio.h>
int main()
{
    float amt=0;
    int units;
  printf("enter units:"); 
scanf("%d",&units);

if (units >=100)
{
    amt=amt+(100*10);
    units=units-100;
    if(units>=100)
if (units >=100)
{
    amt=amt+(100*10);
    units=units-100;
    if(units>=100)
  {  
    amt=amt+(100*12);
    units= units-100;
    if (units>=100)
    {
        amt=amt +(100*15);
        units =units-100;
        if(units>0)  
         
        amt =amt+(units*17);
    }
    else
    amt=amt+(units*15);
}
else
amt=amt+(units*12);
}
else
amt=amt+(units*10);
}
else
amt=amt+(units*8);
printf("amount is %d",amt);
return 0;
}