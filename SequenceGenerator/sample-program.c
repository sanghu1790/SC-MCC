//This program is a sample program to show the size of SC-MCC for each predicate
#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);

if (( a > 10))
   print("Predicate 1"); 


if (( a > 10) || (b < 10))
   print("Predicate 2"); 


if ((( a > 10) && (b < 10)) || (c == 10))
   print("Predicate 3"); 


if ((( a > 10) && (b < 10)) || ((c == 10) && (d != 10)))
   print("Predicate 4"); 


if (((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (a == 10))
   print("Predicate 5"); 


if (((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || ((a == 10) || (b != 10)))
   print("Predicate 6"); 


if (((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && (c > 10)))
   print("Predicate 7"); 


if (((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10))))
   print("Predicate 8"); 


if ((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (a <= 10))
   print("Predicate 9"); 


if ((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && ((a <= 10) && (b >= 10)))
   print("Predicate 10"); 


if ((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || (c <= 10)))
   print("Predicate 11"); 


if ((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))
   print("Predicate 12"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || (a != 10))
   print("Predicate 13"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || ((a != 10) && (b != 10)))
   print("Predicate 14"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || (((a != 10) && (b != 10)) || (c != 10)))
   print("Predicate 15"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || (((a != 10) && (b != 10)) || ((c != 10) && (d != 10))))
   print("Predicate 16"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || ((((a != 10) && (b != 10)) || ((c != 10) && (d != 10))) && ( a > 10)))
   print("Predicate 17"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || ((((a != 10) && (b != 10)) || ((c != 10) && (d != 10))) && ((( a > 10) && (b < 10)))))
   print("Predicate 18"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || ((((a != 10) && (b != 10)) || ((c != 10) && (d != 10))) && ((( a > 10) && (b < 10)) || (c == 10))))
   print("Predicate 19"); 


if ((((((( a > 10) && (b < 10)) || ((c == 10) && (d != 10))) || (((a == 10) || (b != 10)) && ((c > 10) || ( d < 10)))) && (((a <= 10) && (b >= 10)) || ((c <= 10) && (d >= 10))))) || ((((a != 10) && (b != 10)) || ((c != 10) && (d != 10))) && ((( a > 10) && (b < 10)) || ((c == 10) && (d != 10)))))
   print("Predicate 20"); 

return 0;
}
