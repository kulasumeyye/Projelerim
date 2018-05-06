#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odev1, odev2, odev3, quiz1,quiz2,quiz3,araSinav1,araSinav2,fnl;
float sonuc, odev_ort, quiz_ort, araSinav_ort,fnl_ort;

printf("odev notlarinizi giriniz:\n");
scanf("%d %d %d",&odev1,&odev2,&odev3);
odev_ort=odev1*0.03+odev2*0.03+odev3*0.03;
printf("quiz notlarinizi giriniz:\n");
scanf("%d %d %d",&quiz1,&quiz2,&quiz3);
quiz_ort=quiz1*0.07+quiz2*0.07+quiz3*0.07;
printf("arasinav notlarinizi giriniz:\n");
scanf("%d %d",&araSinav1,&araSinav2);
araSinav_ort=araSinav1*0.15+araSinav2*0.15;
printf("final notunuzu giriniz:\n");
scanf("%d",&fnl);
fnl_ort=fnl*0.40;
sonuc=odev_ort+quiz_ort+araSinav_ort+fnl_ort;
printf("Ders notunuz: %.2f",sonuc);


    return 0;
}
