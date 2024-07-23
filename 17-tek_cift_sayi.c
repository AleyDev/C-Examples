#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int sayi;  // Değişkeni tanımlıyorum

    // Kullanıcıdan bir sayı girmesini istiyorum
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    // Sayının tek mi çift mi olduğunu kontrol ediyorum ve ekrana yazdırıyorum
    if (sayi % 2 == 0) {
        printf("%d çifttir\n", sayi);
    } else {
        printf("%d tektir\n", sayi);
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
