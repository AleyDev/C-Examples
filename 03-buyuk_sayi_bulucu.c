#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int num1, num2;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan iki sayı girmesini istiyorum
    printf("İki sayı girin: ");
    scanf("%d %d", &num1, &num2);

    // Sayıları karşılaştırıyorum ve sonucu yazdırıyorum
    if (num1 > num2) {
        printf("%d büyüktür %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d küçüktür %d\n", num1, num2);
    } else {
        printf("%d ve %d eşittir\n", num1, num2);
    }

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
