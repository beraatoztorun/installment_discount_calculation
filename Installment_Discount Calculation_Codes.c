#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void){
	int fiyatTutar,taksitMiktari;
	char kullaniciCevabi;
	srand(time(NULL));
	fiyatTutar=rand()%2000;
	printf("Yaptiginiz alisveris tutari:%d TL\n",fiyatTutar);
	printf("Taksit ister misiniz(E-H):");
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		printf("Kac taksit uygulanmasini istersiniz(3-6-9):");
		scanf("%d",&taksitMiktari);
		switch(taksitMiktari){
			case 3:
				fiyatTutar+=fiyatTutar*0.03;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 6:
				fiyatTutar+=fiyatTutar*0.06;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 9:
				fiyatTutar+=fiyatTutar*0.09;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			default:
				printf("Girdiginiz taksit miktari uygun olmadi. Taksit uygulanmiyor.\n");
		}
	}
	else{
		printf("Herhangi bir taksit uygulanmadi.\n");
	}
	printf("\nMusteri kartiniz var mi(E-H):");
	fflush(stdin);//bufferi temizlemek icin.
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		fiyatTutar-=fiyatTutar*0.05;//yuzde 5
	}
	else{
		printf("Herhangi bir indirim uygulanmadi.\n");
	}
	printf("Total miktar:%d TL",fiyatTutar);
	
	return 0;
}
