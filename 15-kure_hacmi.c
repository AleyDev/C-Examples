#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#define PI 3.14159265358979323846  // Pi sabitini tanımlıyorum

int main() {
    double yaricap, hacim;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan kürenin yarıçapını girmesini istiyorum
    printf("Kürenin yarıçapını girin: ");
    scanf("%lf", &yaricap);

    // Kürenin hacmini hesaplıyorum
    hacim = (4.0 / 3.0) * PI * yaricap * yaricap * yaricap;

    // Kürenin hacmini ekrana yazdırıyorum
    printf("Kürenin hacmi: %.2lf\n", hacim);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
