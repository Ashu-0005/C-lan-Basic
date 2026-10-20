#include <stdio.h>

int main()
{

    printf("Q2\n");
    printf("Ek student ke 5 subjects ke marks hain:\n");
    printf("Tumhe C program likhna hai jo ye calculate kare:\n");
    printf("1. Total Marks: 5 subjects ke marks ka sum.\n");
    printf("2.Percentage: Total marks ko 500 se divide karke percentage nikalo.\n");
    printf("3.Average: Student ke average marks calculate karo.\n");
    printf("4.Result: Agar percentage 40 ya usse zyada hai, toh Pass, warna Fail print karo.\n");

    int hindi = 78;
    int english = 85;
    int math = 92;
    int science = 88;
    int computer = 95;
    int total_marks = hindi + english + math + science + computer;
    float percentage = (total_marks / 500.0) * 100;
    float average = total_marks / 5.0;

    char rahul = 30;
    char ram = 80;
    char sita = 90;
    char deko = 99;
    char saitma = 20;

    printf("Ans\n");
    printf("Total Marks %d\n", total_marks);
    printf("Percentage %2.f\n", percentage);
    printf("Averge Student of 5 =  %2.f\n", average);

    // ye pertange nikalne ke liy kiya if ka use

    if (percentage >= 40)
    {
        printf("Result = Pass\n");
    }
    else
    {
        printf("Result = Fail\n");
    }

    if (ram > 40)
    {
        printf("Ram = %d%% Pass\n ", ram);
    }

    else
    {
        printf("Ram = %d%% Fail\n", ram);
    }

    if (sita > 40)
    {
        printf("Sita = %d%% Pass\n ", sita);
    }

    else
    {
        printf("Sita = %d%% Fail\n", sita);
    }

    if (saitma > 40)
    {
        printf("Saitma = %d%% Pass\n ", saitma);
    }

    else
    {
        printf("Saitma = %d%% Fail\n", saitma);
    }

    if (rahul > 40)
    {
        printf("Rahul = %d%% Pass\n ", rahul);
    }

    else
    {
        printf("Rahul = %d%% Fail\n", rahul);
    }

    if (deko > 40)
    {
        printf("Deko = %d%% Pass\n ", deko);
    }

    else
    {
        printf("Deko = %d%% Fail\n", deko);
    }

    return 0;
}