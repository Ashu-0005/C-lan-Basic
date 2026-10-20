#include <stdio.h>

int main()
{
 //Escape Sequence List
 
    // agar apn ko double quets("") me print karwana ho tab apn ye use karenge
    printf("*Double Quets\n");
    printf("Hello, \"Nishid\"\n\n");
    // is type se double quets me print hoga

    // agar single qutes('') me karana ho to
    //  Tab aise karenge
    printf("*Single Quets\n");
    printf("Hello, \'Nishid\'\n\n");




    printf("*Escape Sequence List By AI\n\n");

    // 1. Tab (\t) ka display
    printf("Hello\tWorld -by \\t\n\n");

    // 2. NewLine (\n) ka display
    printf("LineOne\nLineTwo -by \\n\n\n");

    // 3. Backspace (\b) ka display (yahan 'o' hat jayega)
    printf("Helloo\b World -by \\b\n\n");

    // 4. Single Quote (\') ka display
    printf("It\'s C programming -by \\'\'\n\n");

    // 5. Backslash (\\) ka display
    printf("Folder path: C:\\code -by \\\"\\\"\n\n");

    // 6. Percentage (%%) ka display
    printf("Score: 100%% -by \\%%\n\n");

}
