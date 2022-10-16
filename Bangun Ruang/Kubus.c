#include <stdio.h>

int volume_kubus(int s){
    return s * s * s;
}
int luas_permukaan_kubus(int s){
    return 6 * s * s;
}

int main()
{
    printf("\nProgram Menghitung Volume dan Luas Permukaan Kubus\n\n");
    int s;
    printf("Masukkan Sisi : "); scanf("%d", &s);

    printf("\nVolume Kubus : %d\n", volume_kubus(s));
    printf("Luas Permukaan Kubus : %d\n", luas_permukaan_kubus(s));

    return 0;
}