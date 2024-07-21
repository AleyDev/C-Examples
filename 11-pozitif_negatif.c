#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int sayi;  // Değişkeni tanımlıyorum

    // Kullanıcıdan bir sayı girmesini istiyorum
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    // Sayının pozitif, negatif veya sıfır olup olmadığını kontrol ediyorum ve ekrana yazdırıyorum
    if (sayi > 0) {
        printf("%d pozitiftir\n", sayi);
    } else if (sayi < 0) {
        printf("%d negatiftir\n", sayi);
    } else {
        printf("%d sıfırdır\n", sayi);
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
