#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    int i, j;  // Değişkenleri tanımlıyorum

    // Çarpım tablosunu oluşturuyorum ve ekrana yazdırıyorum
    for (i = 1; i <= 10; ++i) {
        for (j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Her satırdan sonra bir boş satır ekliyorum
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
