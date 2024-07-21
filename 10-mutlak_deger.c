#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    double num;  // Değişkeni tanımlıyorum

    // Kullanıcıdan bir sayı girmesini istiyorum
    printf("Bir sayı girin: ");
    scanf("%lf", &num);

    // Sayının mutlak değerini hesaplıyorum ve yazdırıyorum
    if (num < 0) {
        num = -num;
    }

    printf("Mutlak değer: %.2lf\n", num);

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
