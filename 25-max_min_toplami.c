#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int n, i, sayi, max, min, toplam;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan kaç sayı gireceğini öğreniyorum
    printf("Kaç sayı gireceksiniz? ");
    scanf("%d", &n);

    // İlk sayıyı girmesini istiyorum ve bu sayıyı hem max hem de min olarak ayarlıyorum
    printf("1. sayıyı girin: ");
    scanf("%d", &sayi);
    max = min = sayi;
    toplam = 0;  // Toplamı başlangıçta sıfıra ayarlıyorum

    // Diğer sayıları kullanıcıdan alıyorum ve max, min ve toplam değerlerini güncelliyorum
    for (i = 2; i <= n; i++) {
        printf("%d. sayıyı girin: ", i);
        scanf("%d", &sayi);
        if (sayi > max) {
            max = sayi;
        }
        if (sayi < min) {
            min = sayi;
        }
        toplam += sayi;
    }

    // Maksimum ve minimum değerlerin toplamını hesaplıyorum
    toplam = max + min;

    // Sonucu ekrana yazdırıyorum
    printf("En büyük ve en küçük sayıların toplamı: %d\n", toplam);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
