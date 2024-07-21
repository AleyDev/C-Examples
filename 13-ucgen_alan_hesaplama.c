#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double taban, yukseklik, alan;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan üçgenin taban uzunluğunu ve yüksekliğini girmesini istiyorum
    printf("Üçgenin taban uzunluğunu girin: ");
    scanf("%lf", &taban);

    printf("Üçgenin yüksekliğini girin: ");
    scanf("%lf", &yukseklik);

    // Üçgenin alanını hesaplıyorum
    alan = (taban * yukseklik) / 2;

    // Üçgenin alanını yazdırıyorum
    printf("Üçgenin alanı: %.2lf\n", alan);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
