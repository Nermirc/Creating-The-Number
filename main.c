#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Tek haneli 3 sayý olan x,y,z'yi girdi olarak alan ve yuzler basamagýna x onlar
    //basamagýna y ve birler basamagýna z koyan ve sonunda bu sayýyý bulan bir C prog-
    //ramý yazýnýz.
   int x,y,z,sayi_total;
   printf("Yuzler basamagi : ");
   scanf("%d",&x);
   printf("Onlar basamagi : ");
   scanf("%d",&y);
   printf("Birler basamagi : ");
   scanf("%d",&z);
   sayi_total=100*x+10*y+z;
   printf("Sayimiz %d",sayi_total);

}
