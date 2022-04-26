#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#include<ctype.h>
void cetak(int array[],int n){
for(int i=0;i<n;i++){
        printf("data yang tersimpan adalah data %d = %d\n",i+1, array[i]);
}
}

void binari(int array[],int n){
int awal=0;
int akhir =n-1;
int ketemu=0;
int cari;
int tengah;
printf("masukan nilai yang anda cari: ");
scanf("%d",&cari);
int i=0;
while(ketemu==0 && i<n){
tengah=(awal+akhir)/2;
if(array[tengah]==cari){
    ketemu = tengah;
    printf("data %d yang anda cari ketemu di  %d",cari,array[tengah]);
    break;
    }else{
    }
if(array[tengah]<cari){
    awal = tengah + 1;
}else {
    akhir = tengah - 1;

}
i++;
}
if(array[tengah]!=cari){
    printf("data tidak ketemu");
}

}
int main(){
int data[100];
int batas;

printf("masukan jumlah angka yang ingin anda cari: ");
scanf("%d",&batas);
printf("masukan angka yang ingin anda cari secara terurut: \n");
for(int i=0;i<batas;i++){
        printf("Data ke - %d : ", i+1);
        scanf("%d", &data[i]);
}
cetak(data,batas);
binari(data,batas);
return 0;
}
