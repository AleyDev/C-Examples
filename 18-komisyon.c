#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double satis, komisyon;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan satış miktarını girmesini istiyorum
    printf("Satış miktarını girin: ");
    scanf("%lf", &satis);

    // Komisyonu hesaplıyorum (örneğin, %10 komisyon)
    komisyon = satis * 0.10;

    // Komisyonu ekrana yazdırıyorum
    printf("Komisyon: %.2lf\n", komisyon);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
