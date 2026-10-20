#include <stdio.h>

int main() {
        char ch;
    int num1;

    printf("enter a integer value");
    //scanf apn user se value lene ke liy use krte h 
    //printf value print krne ke liy 
    scanf("%d",&num1);
    printf("value of num1 = %d\n",num1);

printf("enter a charcter  value");
    scanf(" %c", &ch);
    printf("charcter= %c\n", ch);

    //1 methoed ek to ye tarika h print karane ka
    // ab 2nd mehthoed h don datatype ke name ko ek sath printf me lik do 
    //jaise
 printf("charter value is %c, interger value is %d", ch,num1);
    


 //Important To know Read this
//ek buffer hota h 
//jaise num1 me apn ne value di to buffer me gayi
//buffer me ab kya h num1 ki value jo user se li h isly jab user num1 ki value jasie 10 likhi to vo fir enter dabaya to vo enter dabaya 
//vo ban gaya \n yyani jo bhi keybored me button h sab sab ke sab value h "\n" h ok
//yaani buffer me two value h num1 ki 10 aur \n 
//jab user ne num1 ki value aai samne print hoke fir charcter yaabni ch ki value usne puchi hi nahi 
//direct buffer me se dusri value uta li jo thi \n yaani kali print hoke aa gaya
//yaani jo bhi value hoti h vo buffer me store hoti h 
//to apn ko ch ki value user se puchne ke liy buffer ko kahli krna hoga 
//vo kaise hoga
//uske liy apn ko "%c" likte h char datatype ki value print karne ke liy 
//uski jgh ab " %c" ye likna hoga simple h %c ke aage space dena hoga jisse buffer clear ho jayega 
//ab kya hoga int ki value (10) user ne di enter dabaya fir buffer me two value store hui user ki value(10) aur \n ab jab apn  " %c" ye print hoga to user se value puchne ka op[tion aayega yuki apn ne %c ke aage space diya jisse buffer clar ho gaya yaani %c run hua to buffer me kuch bhi nahi tha isliy usne user se value puchi fir value print ho gayi ch ki ]


//In short Buffer Problem 
//1st Mehoed- Use a space before %c to tell scanf() to skip any whitespace, including: Spaces, Tabs, Newlines (\n).
//2nd Mehtoed- Use getchar(): Clears the input buffer.




   
    return 0;
}