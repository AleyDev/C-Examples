#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int sayi1, sayi2, toplam;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan iki sayı girmesini istiyorum
    printf("Birinci sayıyı girin: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi2);

    // Sayıların toplamını hesaplıyorum
    toplam = sayi1 + sayi2;

    // Toplamı ekrana yazdırıyorum
    printf("Toplam: %d\n", toplam);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
