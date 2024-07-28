#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum
#include <string.h> // String fonksiyonlarını kullanmak için kütüphaneyi dahil ediyorum

int main() {
    char str[100], sonuc[100];  // Girdi ve çıktı stringleri için diziler tanımlıyorum
    int i, j = 0;  // Döngü değişkenlerini tanımlıyorum

    // Kullanıcıdan bir cümle girmesini istiyorum
    printf("Bir cümle girin: ");
    gets(str);  // Kullanıcının girdiği cümleyi alıyorum

    // Cümledeki boşlukları kaldırıyorum
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            sonuc[j++] = str[i];
        }
    }
    sonuc[j] = '\0';  // Sonuç stringini sonlandırıyorum

    // Boşluksuz cümleyi ekrana yazdırıyorum
    printf("Boşluksuz cümle: %s\n", sonuc);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
