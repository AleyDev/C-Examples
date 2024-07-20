#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int num, i;  // Değişkenleri tanımlıyorum
    unsigned long long faktoriyel = 1;  // Faktöriyel sonucunu saklamak için değişken oluşturuyorum

    // Kullanıcıdan bir sayı girmesini istiyorum
    printf("Bir sayı girin: ");
    scanf("%d", &num);

    // Girilen sayının faktöriyelini hesaplıyorum
    if (num < 0) {
        printf("Negatif sayıların faktöriyeli yoktur.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            faktoriyel *= i;  // Faktöriyeli hesaplıyorum
        }
        printf("%d sayısının faktöriyeli: %llu\n", num, faktoriyel);
    }

    return 0;  // Programı başarılı bir şekilde sonlandırıyorum
}
