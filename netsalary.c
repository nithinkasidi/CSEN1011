#include <stdio.h>
int main ()
{
int basic , da , hra , ta , pf , it , others , net_salery;

printf ("enter the basic salery in ($) : ");
scanf("%d" , &basic);

printf("enter hra in ($) : ");
scanf("%d" , &hra);

printf("enter ta in ($) : ");
scanf("%d" , &ta);

printf("enter others in ($) : ");
scanf("%d" , &others);

//caliculate da 13% of basic salery
da = (13*basic/100);
//caliculate it 16% of basic salery
ta = (16*basic/100);
//caliculate pf 15% of basic salery
pf = (15*basic/100);

//caliculating the net salery
net_salery = (basic + da + ta + others) - (pf + it);

//printing the net salery
printf("net salery = %d\n",net_salery );

return 0;
}