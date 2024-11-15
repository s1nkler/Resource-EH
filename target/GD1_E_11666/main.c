#include "header.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	mahasiswa m[5];
	string nama, npm;
	float ipk;
	
	int menu, index;
	initMahasiswa(m);
	
	do{
		system("cls");
		printf("1. Tambah data\n");
		printf("2. Tampil data\n");
		printf("3. Hapus data\n");
		printf("0. Keluar program\n");
		printf(">>> "); scanf("%d", &menu);
		switch (menu){
			
			case 1:
				index = isFull(m);
				if(isFull(m)!=-1){
					printf("\nMasukkan nama Mahasiswa: "); fflush(stdin);gets(nama);
					printf("\nMasukkan NPM Mahasiswa: "); fflush(stdin);gets(npm);
					printf("\nMasukkan IPK Mahasiswa: "); scanf("%f", &ipk);
					
					m[index]=makeMahasiswa(nama,npm,ipk);
					printf("\n[+] Berhasil menambah data");
				}else{
					printf("\n[!] Data sudah penuh");
				}
			break;
			
			case 2:
				tampilMahasiswa(m);
			break;
			
			case 3:
				printf("\nMasukkan NPM Mahasiswa yang akan dihapus: "); fflush(stdin);gets(npm);
				hapusMahasiswa(m, npm);
			break;
			
			case 0:
				printf("\n\n==== Sinclair Collins - 220711666 ====");
			break;
			
			default:
				printf("\n[!] Menu tidak ada!!!");
			break;
		}
		getch();
	}while(menu!=0);
	return 0;
}
