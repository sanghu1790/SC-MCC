//This program is zodiac.c
#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
int kappa;
int main()
{
kappa=0;
int date,ch;
scanf("%d",&date);
scanf("%d",&ch);


__CPROVER_assert( (((!(date>=21))&&(ch==3))||((!(date<=20))&&(ch==4))) );
__CPROVER_assert( (((!(date>=21))&&(ch==3))||((date<=20)&&(!(ch==4)))) );
__CPROVER_assert( (((!(date>=21))&&(ch==3))||((date<=20)&&(ch==4))) );
__CPROVER_assert( (((date>=21)&&(!(ch==3)))||((!(date<=20))&&(ch==4))) );
__CPROVER_assert( (((date>=21)&&(!(ch==3)))||((date<=20)&&(!(ch==4)))) );
__CPROVER_assert( (((date>=21)&&(!(ch==3)))||((date<=20)&&(ch==4))) );
__CPROVER_assert( (((date>=21)&&(ch==3))||((date<=20)&&(ch==4))) );
if(((date>=21)&&(ch==3))||((date<=20)&&(ch==4)))
printf("YOU ARE A ARIES AND YOUR BIRTHSTONE IS BLOODSTONE");

__CPROVER_assert( (((!(date>=21))&&(ch==4))||((!(date<=21))&&(ch==5))) );
__CPROVER_assert( (((!(date>=21))&&(ch==4))||((date<=21)&&(!(ch==5)))) );
__CPROVER_assert( (((!(date>=21))&&(ch==4))||((date<=21)&&(ch==5))) );
__CPROVER_assert( (((date>=21)&&(!(ch==4)))||((!(date<=21))&&(ch==5))) );
__CPROVER_assert( (((date>=21)&&(!(ch==4)))||((date<=21)&&(!(ch==5)))) );
__CPROVER_assert( (((date>=21)&&(!(ch==4)))||((date<=21)&&(ch==5))) );
__CPROVER_assert( (((date>=21)&&(ch==4))||((date<=21)&&(ch==5))) );
if(((date>=21)&&(ch==4))||((date<=21)&&(ch==5)))
printf("YOU ARE A TAURUS AND YOUR BIRTHSTONE IS SAPPHIRE");

__CPROVER_assert( (((!(date>=22))&&(ch==5))||((!(date<=21))&&(ch==6))) );
__CPROVER_assert( (((!(date>=22))&&(ch==5))||((date<=21)&&(!(ch==6)))) );
__CPROVER_assert( (((!(date>=22))&&(ch==5))||((date<=21)&&(ch==6))) );
__CPROVER_assert( (((date>=22)&&(!(ch==5)))||((!(date<=21))&&(ch==6))) );
__CPROVER_assert( (((date>=22)&&(!(ch==5)))||((date<=21)&&(!(ch==6)))) );
__CPROVER_assert( (((date>=22)&&(!(ch==5)))||((date<=21)&&(ch==6))) );
__CPROVER_assert( (((date>=22)&&(ch==5))||((date<=21)&&(ch==6))) );
if(((date>=22)&&(ch==5))||((date<=21)&&(ch==6)))
printf("YOU ARE A GEMINI AND YOUR BIRTHSTONE IS AGATE");

__CPROVER_assert( (((!(date>=22))&&(ch==6))||((!(date<=22))&&(ch==7))) );
__CPROVER_assert( (((!(date>=22))&&(ch==6))||((date<=22)&&(!(ch==7)))) );
__CPROVER_assert( (((!(date>=22))&&(ch==6))||((date<=22)&&(ch==7))) );
__CPROVER_assert( (((date>=22)&&(!(ch==6)))||((!(date<=22))&&(ch==7))) );
__CPROVER_assert( (((date>=22)&&(!(ch==6)))||((date<=22)&&(!(ch==7)))) );
__CPROVER_assert( (((date>=22)&&(!(ch==6)))||((date<=22)&&(ch==7))) );
__CPROVER_assert( (((date>=22)&&(ch==6))||((date<=22)&&(ch==7))) );
if(((date>=22)&&(ch==6))||((date<=22)&&(ch==7)))
printf("YOU ARE A CANCER AND YOUR BIRTHSTONE IS EMERALD");

__CPROVER_assert( (((!(date>=23))&&(ch==7))||((!(date<=22))&&(ch==8))) );
__CPROVER_assert( (((!(date>=23))&&(ch==7))||((date<=22)&&(!(ch==8)))) );
__CPROVER_assert( (((!(date>=23))&&(ch==7))||((date<=22)&&(ch==8))) );
__CPROVER_assert( (((date>=23)&&(!(ch==7)))||((!(date<=22))&&(ch==8))) );
__CPROVER_assert( (((date>=23)&&(!(ch==7)))||((date<=22)&&(!(ch==8)))) );
__CPROVER_assert( (((date>=23)&&(!(ch==7)))||((date<=22)&&(ch==8))) );
__CPROVER_assert( (((date>=23)&&(ch==7))||((date<=22)&&(ch==8))) );
if(((date>=23)&&(ch==7))||((date<=22)&&(ch==8)))
printf("YOU ARE A LEO AND YOUR BIRTHSTONE IS ONYX");

__CPROVER_assert( (((!(date>=23))&&(ch==8))||((!(date<=22))&&(ch==9))) );
__CPROVER_assert( (((!(date>=23))&&(ch==8))||((date<=22)&&(!(ch==9)))) );
__CPROVER_assert( (((!(date>=23))&&(ch==8))||((date<=22)&&(ch==9))) );
__CPROVER_assert( (((date>=23)&&(!(ch==8)))||((!(date<=22))&&(ch==9))) );
__CPROVER_assert( (((date>=23)&&(!(ch==8)))||((date<=22)&&(!(ch==9)))) );
__CPROVER_assert( (((date>=23)&&(!(ch==8)))||((date<=22)&&(ch==9))) );
__CPROVER_assert( (((date>=23)&&(ch==8))||((date<=22)&&(ch==9))) );
if(((date>=23)&&(ch==8))||((date<=22)&&(ch==9)))
printf("YOU ARE A VIRGO AND YOUR BIRTHSTONE IS CARNELIAN");

__CPROVER_assert( (((!(date>=23))&&(ch==9))||((!(date<=23))&&(ch==10))) );
__CPROVER_assert( (((!(date>=23))&&(ch==9))||((date<=23)&&(!(ch==10)))) );
__CPROVER_assert( (((!(date>=23))&&(ch==9))||((date<=23)&&(ch==10))) );
__CPROVER_assert( (((date>=23)&&(!(ch==9)))||((!(date<=23))&&(ch==10))) );
__CPROVER_assert( (((date>=23)&&(!(ch==9)))||((date<=23)&&(!(ch==10)))) );
__CPROVER_assert( (((date>=23)&&(!(ch==9)))||((date<=23)&&(ch==10))) );
__CPROVER_assert( (((date>=23)&&(ch==9))||((date<=23)&&(ch==10))) );
if(((date>=23)&&(ch==9))||((date<=23)&&(ch==10)))
printf("YOU ARE A LIBRA AND YOUR BIRTHSTONE IS CHRYSOLITE");

__CPROVER_assert( (((!(date>=24))&&(ch==10))||((!(date<=21))&&(ch==11))) );
__CPROVER_assert( (((!(date>=24))&&(ch==10))||((date<=21)&&(!(ch==11)))) );
__CPROVER_assert( (((!(date>=24))&&(ch==10))||((date<=21)&&(ch==11))) );
__CPROVER_assert( (((date>=24)&&(!(ch==10)))||((!(date<=21))&&(ch==11))) );
__CPROVER_assert( (((date>=24)&&(!(ch==10)))||((date<=21)&&(!(ch==11)))) );
__CPROVER_assert( (((date>=24)&&(!(ch==10)))||((date<=21)&&(ch==11))) );
__CPROVER_assert( (((date>=24)&&(ch==10))||((date<=21)&&(ch==11))) );
if(((date>=24)&&(ch==10))||((date<=21)&&(ch==11)))
printf("YOU ARE A SCORPIO AND YOUR BIRTHSTONE IS BERYL");

__CPROVER_assert( (((!(date>=22))&&(ch==11))||((!(date<=21))&&(ch==12))) );
__CPROVER_assert( (((!(date>=22))&&(ch==11))||((date<=21)&&(!(ch==12)))) );
__CPROVER_assert( (((!(date>=22))&&(ch==11))||((date<=21)&&(ch==12))) );
__CPROVER_assert( (((date>=22)&&(!(ch==11)))||((!(date<=21))&&(ch==12))) );
__CPROVER_assert( (((date>=22)&&(!(ch==11)))||((date<=21)&&(!(ch==12)))) );
__CPROVER_assert( (((date>=22)&&(!(ch==11)))||((date<=21)&&(ch==12))) );
__CPROVER_assert( (((date>=22)&&(ch==11))||((date<=21)&&(ch==12))) );
if(((date>=22)&&(ch==11))||((date<=21)&&(ch==12)))
printf("YOU ARE A SAGITTARIUS AND YOUR BIRTHSTONE IS TOPAZ");

__CPROVER_assert( (((!(date>=22))&&(ch==12))||((!(date<=21))&&(ch==1))) );
__CPROVER_assert( (((!(date>=22))&&(!(ch==1)2))||((date<=21)&&(!(ch==1)))) );
__CPROVER_assert( (((!(date>=22))&&(ch==12))||((date<=21)&&(ch==1))) );
__CPROVER_assert( (((date>=22)&&(!(ch==12)))||((!(date<=21))&&(ch==1))) );
__CPROVER_assert( (((date>=22)&&(!(!(ch==1)2)))||((date<=21)&&(!(ch==1)))) );
__CPROVER_assert( (((date>=22)&&(!(ch==12)))||((date<=21)&&(ch==1))) );
__CPROVER_assert( (((date>=22)&&(ch==12))||((date<=21)&&(ch==1))) );
if(((date>=22)&&(ch==12))||((date<=21)&&(ch==1)))
printf("YOU ARE A CAPRICORN AND YOUR BIRTHSTONE IS RUBY");

__CPROVER_assert( (((!(date>=22))&&(ch==1))||((!(date<=18))&&(ch==2))) );
__CPROVER_assert( (((!(date>=22))&&(ch==1))||((date<=18)&&(!(ch==2)))) );
__CPROVER_assert( (((!(date>=22))&&(ch==1))||((date<=18)&&(ch==2))) );
__CPROVER_assert( (((date>=22)&&(!(ch==1)))||((!(date<=18))&&(ch==2))) );
__CPROVER_assert( (((date>=22)&&(!(ch==1)))||((date<=18)&&(!(ch==2)))) );
__CPROVER_assert( (((date>=22)&&(!(ch==1)))||((date<=18)&&(ch==2))) );
__CPROVER_assert( (((date>=22)&&(ch==1))||((date<=18)&&(ch==2))) );
if(((date>=22)&&(ch==1))||((date<=18)&&(ch==2)))
printf("YOU ARE A AQUARIUS AND YOUR BIRTHSTONE IS GARNET");


return 0;
}
