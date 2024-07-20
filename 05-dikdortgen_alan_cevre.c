#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double uzunluk, genislik, alan;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan dikdörtgenin uzunluğunu ve genişliğini girmesini istiyorum
    printf("Dikdörtgenin uzunluğunu girin: ");
    scanf("%lf", &uzunluk);

    printf("Dikdörtgenin genişliğini girin: ");
    scanf("%lf", &genislik);

    // Dikdörtgenin alanını hesaplıyorum
    alan = uzunluk * genislik;

    // Dikdörtgenin alanını yazdırıyorum
    printf("Dikdörtgenin alanı: %.2lf\n", alan);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
