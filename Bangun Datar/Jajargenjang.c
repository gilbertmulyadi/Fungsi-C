#include <stdio.h>

int luas_jajar(int a, int t){
    return a * t;
}
int keliling_jajar(int a, int b){
    return 2 * (a+b);
}

int main()
{
    printf("\nProgram Menghitung Luas dan Keliling Jajar Genjang\n\n");
    int a, b, t;
    printf("Masukkan Panjang Alas : "); scanf("%d", &a);
    printf("Masukkan Panjang Sisi Miring : "); scanf("%d", &b);
    printf("Masukkan Tinggi : "); scanf("%d", &t);

    printf("\nLuas Jajar Genjang : %d\n", luas_jajar(a, t));
    printf("Keliling Jajar Genjang : %d\n", keliling_jajar(a, b));
    
    return 0;
}