#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    char metin[100];  // Metni saklamak için bir dizi tanımlıyorum
    int tekrar, i;    // Değişkenleri tanımlıyorum

    // Kullanıcıdan metni ve tekrar sayısını girmesini istiyorum
    printf("Bir metin girin: ");
    scanf("%s", metin);

    printf("Kaç kez tekrarlamak istediğinizi girin: ");
    scanf("%d", &tekrar);

    // Metni belirtilen sayıda tekrar yazdırıyorum
    for (i = 0; i < tekrar; i++) {
        printf("%s\n", metin);
    }

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
