#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi1, sayi2;
    float sonuc;
    char ch;

    printf("Lutfen sirasi ile iki adet sayi giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);

    printf("Lutfen yapmak istediginiz islemi giriniz (+, -, *, /): ");
    scanf(" %c", &ch); // Bosluk ekleyerek tamponu temizledik.

    if (ch == '+') {
        sonuc = sayi1 + sayi2;
        printf("Toplama sonucu: %.2f\n", sonuc);
    } 
    else if (ch == '-') {
        sonuc = sayi1 - sayi2;
        printf("Cikarma sonucu: %.2f\n", sonuc);
    } 
    else if (ch == '*') {
        sonuc = sayi1 * sayi2;
        printf("Carpma sonucu: %.2f\n", sonuc);
    } 
    else if (ch == '/') {
        if (sayi2 != 0) { // Sifira bolme kontrol.
            sonuc = (float)sayi1 / sayi2;
            printf("Bolme sonucu: %.2f\n", sonuc);
        } else {
            printf("Hata: Sifira bolme yapilamaz!\n");
        }
    } 
    else {
        printf("Yanlis tuslama yaptiniz.\n");
    }

    return 0;
}


