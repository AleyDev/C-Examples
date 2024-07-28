#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

int main() {
    char islem;  // İşlem tipini tutmak için değişken tanımlıyorum
    double sayi1, sayi2, sonuc;  // Sayıları ve sonucu tanımlıyorum

    // Kullanıcıdan iki sayı ve işlem türünü girmesini istiyorum
    printf("Birinci sayıyı girin: ");
    scanf("%lf", &sayi1);
    printf("İkinci sayıyı girin: ");
    scanf("%lf", &sayi2);
    printf("İşlemi girin (+, -, *, /): ");
    scanf(" %c", &islem);  // İşlem karakterini alıyorum

    // İşlem türüne göre hesaplamayı yapıyorum
    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
            } else {
                printf("Hata: Bölme işleminde bölen 0 olamaz.\n");
                return 1;  // Programın başarısız bir şekilde bittiğini belirtiyorum
            }
            break;
        default:
            printf("Geçersiz işlem.\n");
            return 1;  // Programın başarısız bir şekilde bittiğini belirtiyorum
    }

    // Sonucu ekrana yazdırıyorum
    printf("Sonuç: %.2lf\n", sonuc);

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
