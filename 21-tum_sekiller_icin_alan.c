#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int secim;  // Değişkeni tanımlıyorum
    double alan;  // Değişkeni tanımlıyorum

    // Kullanıcıdan hangi şeklin alanını hesaplamak istediğini seçmesini istiyorum
    printf("Hangi şeklin alanını hesaplamak istiyorsunuz?\n");
    printf("1. Kare\n");
    printf("2. Dikdörtgen\n");
    printf("3. Daire\n");
    printf("Seçiminiz: ");
    scanf("%d", &secim);

    if (secim == 1) {
        double kenar;  // Değişkeni tanımlıyorum
        // Kullanıcıdan karenin bir kenar uzunluğunu girmesini istiyorum
        printf("Karenin bir kenarının uzunluğunu girin: ");
        scanf("%lf", &kenar);
        // Karenin alanını hesaplıyorum
        alan = kenar * kenar;
    } else if (secim == 2) {
        double uzunluk, genislik;  // Değişkenleri tanımlıyorum
        // Kullanıcıdan dikdörtgenin uzunluğunu ve genişliğini girmesini istiyorum
        printf("Dikdörtgenin uzunluğunu girin: ");
        scanf("%lf", &uzunluk);
        printf("Dikdörtgenin genişliğini girin: ");
        scanf("%lf", &genislik);
        // Dikdörtgenin alanını hesaplıyorum
        alan = uzunluk * genislik;
    } else if (secim == 3) {
        double yaricap;  // Değişkeni tanımlıyorum
        // Kullanıcıdan dairenin yarıçapını girmesini istiyorum
        printf("Dairenin yarıçapını girin: ");
        scanf("%lf", &yaricap);
        // Dairenin alanını hesaplıyorum
        alan = 3.14159265358979323846 * yaricap * yaricap;
    } else {
        printf("Geçersiz seçim!\n");
        return 1;  // Programın başarısız bir şekilde bittiğini belirtiyorum
    }

    // Alanı ekrana yazdırıyorum
    printf("Alan: %.2lf\n", alan);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
