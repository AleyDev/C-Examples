#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#include <math.h>   // Matematiksel fonksiyonları kullanmak için kütüphaneyi dahil ediyorum

int main() {
    double taban, us, sonuc;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan tabanı girmesini istiyorum
    printf("Tabanı girin: ");
    scanf("%lf", &taban);

    // Kullanıcıdan üssü girmesini istiyorum
    printf("Üssü girin: ");
    scanf("%lf", &us);

    // Üs alma işlemini gerçekleştiriyorum
    sonuc = pow(taban, us);

    // Sonucu ekrana yazdırıyorum
    printf("Sonuç: %.2lf\n", sonuc);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
