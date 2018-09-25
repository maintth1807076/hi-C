#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct conHeo {
    char ten_con_heo[20];
    int tuoi_con_heo;
    int can_nang;
};

int main() {
    struct conHeo conHeo1;
    strcpy(conHeo1.ten_con_heo, "Pink");
    printf("Tên con heo là: %s\n", conHeo1.ten_con_heo);
    conHeo1.tuoi_con_heo = 12;
    conHeo1.can_nang = 130;
    printf("Vui lòng nhập tên con lợn: ");
    fgets(conHeo1.ten_con_heo, 20, stdin);
//    puts(conHeo1.ten_con_heo);
    printf("Tên con heo là: %s\n", conHeo1.ten_con_heo);
//    getchar; để dừng nhập cái khác
    printf("Vui lòng nhập tuổi con heo: ");
    scanf("%d", &conHeo1.tuoi_con_heo);
    printf("Tuổi con heo là: %d tháng\n", conHeo1.tuoi_con_heo);
    printf("Vui lòng nhập cân nặng con heo: ");
    scanf("%d", &conHeo1.ten_con_heo);
    printf("Cân nặng con heo là: %d kg\n", conHeo1.can_nang);
    return 0;
}