#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]) {
    printf("Do dai cua ho: %d\n", strlen(ho));
    int doDaiHo = strlen(ho);
    printf("Do dai cua ho: ");
    int doDaiTen = strlen(ten);
    int tong = doDaiHo + doDaiTen;
    printf("Do dai ten la: %d\n", tong);
    tong++;
    char hovaten[tong];
    strcpy(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("%s", hovaten);
}

int main() {
    char ho[5], ten[5];
    printf("Vui long nhap ho cua ban: ");
    fgets(ho, 5, stdin);
    puts(ho);
    if (!strchr(ho, '\n')) {
        while (fgetc(stdin) != '\n');
    }
    printf("Vui long nhap ten cua ban: ");
    fgets(ten, 5, stdin);
    puts(ten);
    noiHoVaTen(ho, ten);
    return 0;
}