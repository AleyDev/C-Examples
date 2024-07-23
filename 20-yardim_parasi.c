#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double gelir, yardim;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan geliri girmesini istiyorum
    printf("Gelirinizi girin: ");
    scanf("%lf", &gelir);

    // Yardım miktarını hesaplıyorum (örneğin, %20 yardım)
    yardim = gelir * 0.20;

    // Yardım miktarını ekrana yazdırıyorum
    printf("Yardım miktarı: %.2lf\n", yardim);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
