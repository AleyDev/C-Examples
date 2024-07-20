#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int num, basamak;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan bir sayı girmesini istiyorum
    printf("Bir sayı girin: ");
    scanf("%d", &num);

    // Sayının basamaklarını yazdırıyorum
    while (num != 0) {
        basamak = num % 10;  // Son basamağı alıyorum
        printf("%d\n", basamak);  // Basamağı yazdırıyorum
        num /= 10;  // Son basamağı çıkartıyorum
    }

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
