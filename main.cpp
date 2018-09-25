#include <iostream>

int tonghaiso(int a, int b) {
    return a + b;
}

int hieuhaiso(int a, int b) {
    return a - b;
}

int tichhaiso(int a, int b) {
    return a * b;
}

float chiahaiso(int a, int b) {
    if (b == 0) {
        printf("khong the chia cho 0");
        exit(-1);
    } else {
        return (float) a / b;
    }
}

int main() {
    int a;
    int b;
    printf("nhap so thu nhat ");
    scanf("%d", &a);
    printf("nhap so thu hai ");
    scanf("%d", &b);
    int choice;
    printf("nhap lua chon ");
    scanf("%d", &choice);
    int result;
    if (choice == 1) {
        result = tonghaiso(a, b);
        printf("tong hai so la %d", result);
    }
    if (choice == 2) {
        result = hieuhaiso(a, b);
        printf("hieu hai so la %d", result);
    }
    if (choice == 3) {
        result = tichhaiso(a, b);
        printf("tich hai so la %d", result);
    }
    if (choice == 4) {

        printf("thuong hai so la %f", chiahaiso(a, b));
    }
    return 0;
}

