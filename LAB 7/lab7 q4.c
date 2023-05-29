#include <stdio.h>
#include <string.h>

int main() {
    char metin[100];
    int kelimeSayisi = 0;
    int i = 0;

    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);
    
    while (metin[i] != '\0') {
    	
        if ((metin[i] == ' ' || metin[i] == '\n') && metin[i + 1] != ' ' && metin[i + 1] != '\n') {
            kelimeSayisi++;
            
        }
        i++;
    }

    printf("Kelime sayisi: %d\n", kelimeSayisi);

    return 0;
}
