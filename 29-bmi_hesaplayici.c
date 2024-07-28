#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum


int main() {
    double kilo, boy, vki;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan boy ve kilo değerlerini girmesini istiyorum
    printf("Boyunuzu metre cinsinden girin (örneğin, 1.75): ");
    scanf("%lf", &boy);
    printf("Kilonuzu girin: ");
    scanf("%lf", &kilo);

    // Vücut kitle indeksini hesaplıyorum
    vki = kilo / (boy * boy);

    // VKİ değerini ekrana yazdırıyorum
    printf("Vücut kitle indeksiniz: %.2lf\n", vki);

    // VKİ değerine göre durumu belirliyorum ve ekrana yazdırıyorum
    if (vki <= 18.5) {
        printf("Durumunuz: Zayıf\n");
    } else if (18.5 < vki && vki < 24.9) {
        printf("Durumunuz: Normal\n");
    } else if (25 <= vki && vki < 29.9) {
        printf("Durumunuz: Kilolu\n");
    } else if (30 <= vki && vki < 34.9) {
        printf("Durumunuz: 1. derece obezite - (Fazla kilolu)\n");
    } else if (35 <= vki && vki < 39.9) {
        printf("Durumunuz: 2. derece obezite - (Obez)\n");
    } else if (vki >= 40) {
        printf("Durumunuz: 3. derece obezite - (Aşırı obez)\n");
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
