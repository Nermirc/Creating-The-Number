#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Tek haneli 3 say� olan x,y,z'yi girdi olarak alan ve yuzler basamag�na x onlar
    //basamag�na y ve birler basamag�na z koyan ve sonunda bu say�y� bulan bir C prog-
    //ram� yaz�n�z.
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
