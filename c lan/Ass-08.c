#include <stdio.h>

int main()
{
    // Sum of intergers 
    int a = 1;
    int b = 12;
int sum = a+b;

 printf("Sum = %d\n",sum);   


 // Sum of intrgers but in easy way to undestand
    int aa = 100;
    int bb = 120;
int sum_m = aa+bb;

 printf("Sum of %d and %d = %d\n\n",aa,bb,sum_m);   


printf("First way to calcutation\n");
//Agar sab math ki calcalution karni ho jaise + - / * to apn ek sath kar skte h jaise
 printf("sum of %d and %d = %d\n\n",aa,bb,sum_m);
// ye uper bala to ek tarika h sum ya kuch bhi krne ka variable banake vaible name li ke 
// aur dusra tarika h ki direct value do aur printf ke end me (a+b) (a-b) (a*b) (a/b) aisa likk le direct ho jayega dusra variable bane ki jaroorat nahi padegi 
// like this 
printf("Second way to calcutation\n");
 printf("sum of %d and %d = %d\n",aa,bb,(aa+bb));
 printf("subtracte  of %d and %d = %d\n",aa,bb,(aa-bb));
 printf("Multiply  %d and %d = %d\n",aa,bb,(aa*bb));
 printf("Divide of %d and %d = %d\n",aa,bb,(aa/bb));




 return 0;
}
