#include <stdio.h>

int main()
{
    // Ye normal Print honge
    int a = 1;
    int b = 12;
    int c = 123;
    int d = 1234;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n\n\n", d);




    printf("#4-Dight Number in C lan\n");
    // agar apn ko 4-dight number chaiye to apn %4d use karnenge
    //  % ke bad jitni number number dight chaiye vo lik denge

    int aa = 1;
    int bb = 12;
    int cc = 123;
    int dd = 1234;

    printf("%4d\n", aa);
    printf("%4d\n", bb);
    printf("%4d\n", cc);
    printf("%4d\n\n", dd);



    printf("#full real 4-Dight Number  in C lan\n\n");

    // agar total dight 4-dight  nahi h ya apn ko jitni dight chaiye utni nahi h to
    //  pahle %4d likha to uski jagh ab %04d lik do uske bad vo puri 4 dight ho jayegi
    int aaa = 1;
    int bbb = 12;
    int ccc = 123;
    int ddd = 1234;

    printf("%04d\n", aaa);
    printf("%04d\n", bb);
    printf("%04d\n", ccc);
    printf("%04d\n\n", ddd);

printf("#kis type ka number h kaise pata  karin\n\n");

    // number + -  h kaise pata karin ki number positve h ya negetive? 
    //  to apn %+d likenge to number ka type bhi print hike dikega apn ko jisse number ka type chal jayega

    int aaaa = -1;
    int bbbb = +12;
    int cccc = 123;
    int dddd = -1234;

    printf("%+d\n", aaaa);
    printf("%+d\n", bbbb);
    printf("%+d\n", cccc);
    printf("%+d\n", dddd);


    return 0;
}