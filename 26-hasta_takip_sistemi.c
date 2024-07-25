#include <stdio.h>  // Gerekli kütüphaneyi dahil ediyorum

#define MAX_HASTA 100  // Maksimum hasta sayısını tanımlıyorum

int main() {
    int hastalar[MAX_HASTA];  // Hasta numaralarını tutmak için dizi tanımlıyorum
    int n = 0;  // Toplam hasta sayısını başlangıçta sıfır olarak ayarlıyorum
    int secim;  // Kullanıcının menü seçimlerini tutmak için değişken tanımlıyorum

    // Sonsuz döngü başlatıyorum. Bu döngü kullanıcının sürekli işlem yapabilmesi için.
    while (1) {
        // Kullanıcıya menü gösteriyorum.
        printf("\nMenü:\n");
        printf("1. TC numarası ile muayene sırası kontrolü\n");
        printf("2. Doktora gitmesi gereken hastayı çağır\n");
        printf("3. Yeni hasta ekle\n");
        printf("4. Çıkış\n");

        // Kullanıcıdan menüdeki seçeneklerden birini girmesini istiyorum.
        printf("Seçiminizi yapınız (1-4): ");
        scanf("%d", &secim);

        // Kullanıcı 1. seçeneği seçerse, muayene sırasını kontrol edeceğiz.
        if (secim == 1) {
            int tc;  // TC numarasını tutmak için değişken tanımlıyorum

            // Kullanıcıdan TC numarasını girmesini istiyorum.
            printf("TC numaranızı giriniz: ");
            scanf("%d", &tc);

            // Girilen TC numarasının listede olup olmadığını kontrol ediyorum.
            int i, bulundu = 0;  // Döngü değişkeni ve bulundu flag'i tanımlıyorum
            for (i = 0; i < n; i++) {
                if (hastalar[i] == tc) {
                    // TC numarası listede bulunursa, sırasını ekrana yazdırıyorum.
                    printf("%d TC numaralı hastanın muayene sırası: %d\n", tc, i + 1);
                    bulundu = 1;
                    break;
                }
            }

            // TC numarası listede yoksa, uyarı mesajı gösteriyorum.
            if (!bulundu) {
                printf("%d TC numaralı hasta bulunamadı.\n", tc);
            }

        // Kullanıcı 2. seçeneği seçerse, sıradaki hastayı doktora çağıracağız.
        } else if (secim == 2) {
            // Listede bekleyen hasta varsa...
            if (n > 0) {
                // İlk sıradaki hastayı (listenin başındaki) doktora çağırıyorum.
                printf("%d TC numaralı hasta, doktorun yanına gidiniz.\n", hastalar[0]);

                // Çağrılan hastayı listeden çıkarıyorum.
                for (int i = 0; i < n - 1; i++) {
                    hastalar[i] = hastalar[i + 1];
                }
                n--;  // Hasta sayısını bir azaltıyorum.
            } else {
                // Listede bekleyen hasta yoksa, uyarı mesajı gösteriyorum.
                printf("Bekleyen hasta yok.\n");
            }

        // Kullanıcı 3. seçeneği seçerse, yeni bir hasta ekleyeceğiz.
        } else if (secim == 3) {
            int tc;  // TC numarasını tutmak için değişken tanımlıyorum

            // Kullanıcıdan TC numarasını girmesini istiyorum.
            printf("TC numaranızı giriniz: ");
            scanf("%d", &tc);

            // Girilen TC numarasının zaten listede olup olmadığını kontrol ediyorum.
            int bulundu = 0;  // Bulundu flag'i tanımlıyorum
            for (int i = 0; i < n; i++) {
                if (hastalar[i] == tc) {
                    bulundu = 1;
                    break;
                }
            }

            // TC numarası zaten listede varsa, uyarı mesajı gösteriyorum.
            if (bulundu) {
                printf("%d TC numaralı hasta zaten listede.\n", tc);
            } else {
                // TC numarası listede yoksa, listeye ekliyorum.
                if (n < MAX_HASTA) {
                    hastalar[n] = tc;
                    n++;  // Hasta sayısını bir artırıyorum
                    // Ekleme işlemini onaylayan mesaj gösteriyorum.
                    printf("%d TC numaralı hasta listeye alındı.\n", tc);
                } else {
                    // Liste doluysa uyarı mesajı gösteriyorum.
                    printf("Hasta listesi dolu, yeni hasta eklenemiyor.\n");
                }
            }

        // Kullanıcı 4. seçeneği seçerse, programdan çıkacağız.
        } else if (secim == 4) {
            // Çıkış mesajı gösteriyorum.
            printf("Çıkış yapılıyor...\n");
            break;  // Sonsuz döngüyü kırarak programı sonlandırıyorum.

        // Kullanıcı geçersiz bir seçim yaparsa...
        } else {
            // Uyarı mesajı gösteriyorum.
            printf("Geçersiz seçim. Lütfen 1-4 arasında bir seçenek giriniz.\n");
        }
    }

    return 0;  // Programın başarılı bir şekilde bittiğini belirtiyorum
}
