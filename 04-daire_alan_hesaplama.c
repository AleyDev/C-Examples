#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#define PI 3.14159265358979323846  // PI sabitini tanımlıyorum

int main() {
    double yaricap, alan;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan dairenin yarıçapını girmesini istiyorum
    printf("Dairenin yarıçapını girin: ");
    scanf("%lf", &yaricap);

    // Dairenin alanını hesaplıyorum
    alan = PI * yaricap * yaricap;

    // Dairenin alanını yazdırıyorum
    printf("Dairenin alanı: %.2lf\n", alan);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
