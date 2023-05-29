#include <stdio.h>
#include <string.h>

//verilen metindeki harflerin sayisini bulan program;



int main()
{
    char text[100];
    char harfler[26] = {0};
    int len, i, j;

    printf("Metni giriniz:");
    gets(text);

    len = strlen(text);


    for (i = 0; i < len; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            harfler[text[i] - 'a']++;
        }
    }


    for (i = 0; i < 26; i++) {
        if (harfler[i] > 0) {
            printf("%c den %d tane var\n", i + 'a', harfler[i]);
        }
    }

    return 0;
} 











