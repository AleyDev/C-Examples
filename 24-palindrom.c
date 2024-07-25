#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#include <string.h> // String fonksiyonlarını kullanmak için kütüphaneyi dahil ediyorum

int main() {
    char str[100];  // Dizi değişkenini tanımlıyorum
    int uzunluk, i, palindrom = 1;  // Değişkenleri tanımlıyorum

    // Kullanıcıdan bir kelime girmesini istiyorum
    printf("Bir kelime girin: ");
    scanf("%s", str);

    // Girilen kelimenin uzunluğunu hesaplıyorum
    uzunluk = strlen(str);

    // Kelimenin palindrom olup olmadığını kontrol ediyorum
    for (i = 0; i < uzunluk / 2; i++) {
        if (str[i] != str[uzunluk - i - 1]) {
            palindrom = 0;  // Palindrom değilse flag'i değiştiriyorum
            break;
        }
    }

    // Sonucu ekrana yazdırıyorum
    if (palindrom) {
        printf("%s bir palindromdur.\n", str);
    } else {
        printf("%s bir palindrom değildir.\n", str);
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
