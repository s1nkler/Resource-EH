#include "header.h"

void initMahasiswa(mahasiswa m[]){
	int i;
	for(i=0;i<5;i++){
		strcpy(m[i].nama,"-");
		strcpy(m[i].npm,"-");
		m[i].ipk = 0.0;
	}
}

mahasiswa makeMahasiswa (string nama, string npm, float ipk){
	mahasiswa m;
	strcpy(m.nama,nama);
	strcpy(m.npm,npm);
	m.ipk=ipk;
	
	return m;
}

void tampilMahasiswa(mahasiswa m[]){
	int i;
	for(i=0;i<5;i++){
		printf("\t=====Data Mahasiswa ke-%d\n\n",i+1);
		printf("Nama Mahasiswa: %s\n",m[i].nama);
		printf("NPM Mahasiswa: %s\n",m[i].npm);
		printf("IPK Mahasiswa: %.2f\n\n",m[i].ipk);
		}
	}

void hapusMahasiswa(mahasiswa m[], string npm){
	int i;
	for(i=0;i<5;i++){
		if(strcmp(m[i].npm,npm)==0){
			m[i]=makeMahasiswa("-","-",0.0);
			printf("\n[!] Data telah dihapus");
			return;
		}
	}
	printf("\n[!] Data tidak ditemukan!!!");
}

int isFull(mahasiswa m[]){
	int i;
	for(i=0;i<5;i++){
		if(strcmp(m[i].nama,"-")==0){
			return i;
		}
	}
	return -1;
}
