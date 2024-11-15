#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef char string [50];

typedef struct{
	string nama;
	string npm;
	float ipk;
}mahasiswa;

void initMahasiswa(mahasiswa m[]);
mahasiswa makeMahasiswa (string nama, string npm, float ipk);
void tampilMahasiswa(mahasiswa m[]);
void hapusMahasiswa (mahasiswa m[], string npm);
int isFull(mahasiswa m[]);
