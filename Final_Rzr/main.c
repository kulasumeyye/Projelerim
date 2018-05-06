
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 10
int main(){
int sayi,a[BOYUT]={0},x,y;
char letter;
 printf("Sigarali[1] Sigarasiz[2] Cikis[3]:");
scanf("%d",&sayi);
do{

 if(sayi==1 ){

 y=getEmptyIndex(a,sayi);
 if(y != -1){
 a[y]=1;
 printf("\nSigarali bolumden %d. koltugun rezervasyonu yapilmistir.\n",y);

 }
 else{
 if(getEmptyIndex(a,2) != -1){
 printf("Sigarali yerin Rezervasyonu dolmustur.Sigarasiz yerden almak istermisiniz?[e-h]");
 scanf("%s",&letter);
 if(letter=='e' || letter=='E')
 sayi=2;
 else{
 printf("Diger ucus 3 saat sonra !!.");
 break;
 }
 } else{
 printf("Tum rezervasyonlar dolmustur.Diger ucus 3 saat sonradir.\n");
 break;
 }
 }


 }

 if(sayi==2){
 x=getEmptyIndex(a,sayi);
 if(x != -1){
 a[x]=1;
 printf("\n\nSigarasiz bolumden %d. koltugun rezervasyonu yapilmistir.\n",x);

 }
 else{

 if(getEmptyIndex(a,1) != -1){
 printf("Sigarasiz yerin rezervasyonu dolmustur.Sigarali yerden almak istermisiniz?[e-h]\n");
 scanf("%s",&letter);
 if(letter=='e'||letter=='E'){
 sayi=1;continue;
 }
 else{
 printf("Diger ucus 3 saat sonra..!\n");break;
 }
 }
 else{
 printf("Tum rezervasyonlar dolmustur.Diger ucus 3 saat sonradir.\n");
 break;
 }
 }
 }

 printf("Sigarali[1] Sigarasiz[2] Cikis[3]:");
 scanf("%d",&sayi);
}while(sayi!=3 );
return 0;
}
int getEmptyIndex(int a[],int sayi)
{
int i,startIndex,endIndex;
if(sayi == 1){
 startIndex = 0;
 endIndex = BOYUT/2;
} else{
 startIndex = BOYUT/2;
 endIndex = BOYUT;
}
for(i=startIndex;i<endIndex;i++){
 if(a[i]==0)

 return i;
}
return -1;
}
