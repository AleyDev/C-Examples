#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int n, i;  // Değişkenleri tanımlıyorum
    double num, toplam = 0.0, ortalama;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan kaç sayı gireceğini belirtmesini istiyorum
    printf("Kaç sayı gireceksiniz? ");
    scanf("%d", &n);

    // Kullanıcıdan sayıları girmesini istiyorum ve toplamını hesaplıyorum
    for (i = 1; i <= n; i++) {
        printf("%d. sayıyı girin: ", i);
        scanf("%lf", &num);
        toplam += num;
    }

    // Ortalama hesaplıyorum
    ortalama = toplam / n;

    // Toplam ve ortalamayı yazdırıyorum
    printf("Toplam: %.2lf\n", toplam);
    printf("Ortalama: %.2lf\n", ortalama);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
