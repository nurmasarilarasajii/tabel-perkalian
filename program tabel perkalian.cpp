/* Tabel Perkalian */
/* Nurma Sari Laras Aji */
/* 20051397062 */
/* MI/2020B */

#include <stdio.h>

using namespace std;

int main(){
	int angkaKolom,angkaBaris,n,m;
	printf("angka : ");scanf("%d", &n);
	printf("\nKali : ");scanf("%d", &m);
	for(angkaKolom=1;angkaKolom<=n;angkaKolom++){
		for(angkaBaris=1;angkaBaris<=m;angkaBaris++){
			printf("%d\t", angkaBaris*angkaKolom);
		}
		printf("\n");
	}
	return 0;
}
