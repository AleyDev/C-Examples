#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double taban, yukseklik, alan;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan paralelkenarın taban uzunluğunu girmesini istiyorum
    printf("Paralelkenarın taban uzunluğunu girin: ");
    scanf("%lf", &taban);

    // Kullanıcıdan paralelkenarın yüksekliğini girmesini istiyorum
    printf("Paralelkenarın yüksekliğini girin: ");
    scanf("%lf", &yukseklik);

    // Paralelkenarın alanını hesaplıyorum
    alan = taban * yukseklik;

    // Paralelkenarın alanını ekrana yazdırıyorum
    printf("Paralelkenarın alanı: %.2lf\n", alan);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
