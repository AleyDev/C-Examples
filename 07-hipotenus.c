#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#include <math.h>   // Matematiksel işlemler için gerekli kütüphaneyi dahil ediyorum

int main() {
    double a, b, hipotenus;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan dik kenarların uzunluğunu girmesini istiyorum
    printf("Birinci dik kenarın uzunluğunu girin: ");
    scanf("%lf", &a);

    printf("İkinci dik kenarın uzunluğunu girin: ");
    scanf("%lf", &b);

    // Hipotenüsü hesaplıyorum
    hipotenus = sqrt(a * a + b * b);

    // Hipotenüsü yazdırıyorum
    printf("Hipotenüs: %.2lf\n", hipotenus);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
