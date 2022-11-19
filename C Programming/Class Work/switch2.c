#include <stdio.h>
void main ()
{
char c;
printf ("\n Enter any charactor : ");
scanf ("%c",&c);
switch (c)
{

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':  printf ("\n %c is vowel ",c);
break;
default :
printf ("\n %c is conconent",c);
}


}