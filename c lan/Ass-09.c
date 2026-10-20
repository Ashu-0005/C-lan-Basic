#include <stdio.h>

int main()
{

    // ye question h run karo tab ache se samaj me aayega


    printf("Qus1.-\nTumhara program calculate kare:\n");
    printf("Total bill?\n");
    printf("Discount ke baad final bill?\n");
    printf("Agar 3 friends bill equally divide karein, toh har friend kitna pay karega?\n\n");

    int ghee = 250;
    int aata = 150;
    int tel = 400;
    int discount = 100;
    int Total_Bill = ghee + aata + tel + discount;
    int Net_Total = Total_Bill - discount;

    printf("Ans\n\n");
    printf("Total Bill = %d\n\n", (ghee + aata + tel+discount));

    printf("Discount ke baad final bill = %d\n\n", (Total_Bill - discount)) ;
    printf("Ab Teeno Friends me  Equal hi amount Divide krna  h na \n");

    printf("ram ka h = %d\n",(Net_Total/3));
    printf("ramlal ka h = %d\n",(Net_Total/3));
    printf("laluram ka h = %d\n",(Net_Total/3));
    return 0;
}