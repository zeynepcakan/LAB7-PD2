#include <stdio.h>
#include <string.h>

int kelimeAra(const char *cumle, const char *kelime) {
    int i, j, k;
    int cumleUzunluk = strlen(cumle);
    int kelimeUzunluk = strlen(kelime);
    
    for (i = 0; i <= cumleUzunluk - kelimeUzunluk; i++) {
        j = 0;
        k = i;
        int z = i;
        if (cumle[k] == kelime[j]) {
        	printf("%d.indiste\n",z);
            k++;
            j++;
        }
    }

    for (i = 0; i <= cumleUzunluk - kelimeUzunluk; i++) {
        j = 0;
        k = i;
        while (cumle[k] == kelime[j]) {
            k++;
            j++;
            if (j == kelimeUzunluk && (cumle[k] == ' ' || cumle[k] == '\0'))
                return 1;
        }
    }

    return 0;
}

int main() {
    char cumle[100];
    char kelime[20];

    printf("Bir cumle girin: ");
    gets(cumle);

    printf("Aranacak kelimeyi girin: ");
    gets(kelime);


    if (kelimeAra(cumle, kelime)) {
        printf("Kelime bulundu.\n");
    } else {
        printf("Kelime bulunamadi.\n");
    }

    return 0;
} 
/*
#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];
    char kelime[20];

    printf("Bir cumle girin: ");
    gets(cumle);

    printf("Aranacak kelimeyi girin: ");
    gets(kelime);

    if (strstr(cumle, kelime) != NULL) {
        printf("Kelime bulundu.\n");
    } else {
        printf("Kelime bulunamadi.\n");
    }

    return 0;
} */
