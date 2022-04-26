#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include<ctype.h>

int main(){
/*int arr[5]={4,2,5,3,1};
int found=0;
int nilai;
printf("masukan nilai yang ingin di cari: ");
scanf("%d",&nilai);

for(int i=0;i<5;i++){
    if(arr[i]==nilai){
        found=i;
        break;
    }
    }
        if(nilai==0){
            printf("nilai tidak di temukan");

        }else
    printf("nilai %d di temukan di index ke %d \n",nilai,found);
 */
/*
logigakanya
contohnya kita mau kasi nilai = 5
di dalam for kita proses satu satu terlebih dahulu
index i<5
yang artinya

{0,1,2,3,4}
nilai arraynya
{4,2,1,3,5}
yang kita ingin cari ialah nilai 5 di index ke 2
di sini kita proses menggunakan index;
for(int i=0;i<5;i++){
    if(arr[i]==nilai){
        found=i;
        break;
1. i=0 artinya index i=0 apakah index 0<5 = true
2. trus masuk ke dalam proses if. arr[0] di sini berarti 4
3.apakah 4==5 false, kembali ke index 1
index 1<5 true
arr[1]=2
2==5 false, ke index 2.

index 2<5 true, next
arr[2]=5
5==5 true. proses selesai

*/
//return 0;
/*int array[]={4,7,10,11,45};
int batas=5;
int found=0;
int nilai;
home:
printf("masukan nilai yang ingin di cari: ");
scanf("%d",&nilai);
for(int i=0;i<batas;i++){
    if(array[i]==nilai){
        found=i;
    }
    }
if(nilai==0){
    printf("nilai tidak di temukan\n");

}else
printf("nilai %d di temukan di index ke-%d",nilai,found);
printf("\ntekan sembarang untuk kembali\n");
getch();
goto home;
*/
/*
printf("reveiw\n");
int arr[]={5,6,7,10,11};
int batas=5;
int cari=10;
int found=0;
for(int i=0;i<batas;i++){
    if(arr[i]==cari){
        found=arr[i];
    }

}
if(cari==0){
    printf("nilai anda tidak di temukan\n");
}else
printf("nilai %d di temukan pada index ke-%d\n",cari,found);
*/
int arr[20];
int batas;
int nilai;
int cari;
int found;
printf("masukan berapa banyak angka yang ingin di simpan: ");
scanf("%d",&batas);
printf("masukan nilai yang ingin di simpan: ");
for(int i=0;i<batas;i++)
    scanf("%d",&arr[i]);

printf("nilai yang telah di simpan yaitu: ");
for(int i=0;i<batas;i++){
    printf("%d\t",arr[i]);
    break;
}
printf("\nmasukan nilai yang ingin di cari: ");
scanf("%d",&cari);//5
for(int i=0;i<batas;i++){
    if(arr[i]==cari){
   printf("nilai %d yang anda cari di temukan pada index-%d\n",cari,i);
    found++;
    break;
}
if(found==0){
printf("nilai %d yang anda cari tidak di temukan\n",cari);
}else{
printf("nilai %d yang anda cari tampil sebanyak %d\n",cari,arr[i]);
}
}
return 0;
}



