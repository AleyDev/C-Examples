#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double vize, final, ortalama;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan vize notunu girmesini istiyorum
    printf("Vize notunu girin: ");
    scanf("%lf", &vize);

    // Kullanıcıdan final notunu girmesini istiyorum
    printf("Final notunu girin: ");
    scanf("%lf", &final);

    // Vize ve final notlarının ortalamasını hesaplıyorum
    ortalama = (vize * 0.4) + (final * 0.6);

    // Ortalamayı ekrana yazdırıyorum
    printf("Ortalama: %.2lf\n", ortalama);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
