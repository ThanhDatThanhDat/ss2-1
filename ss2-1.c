#include<stdio.h>

int main(){
	// Kieu du lieu int : dung de luu tru cac so nguyen 
	int a = 1;
	int b = -1;
	printf("a = %d, b = %d \n", a, b);
	
	// Kieu du lieu float : dung de luu tru cac so thuc co phan thap phan
	float c = 1.11f;
	float d = -2.22f;
	printf("x = %.2f, y = %.2f \n", c, d);
	
	// Kieu du lieu char : dung de luu tru cac ki tu 
	char sum = '#';
	char total = 'E';
	printf("sum = %c, total = %c \n", sum, total);
	
	// Kieu du lieu doubel : dung de luu tru cac so thuc voi do chinh sac cao
	double pi = 3.141592653589793;
	printf("pi = %.15f \n", pi);
	
	// Kieu du lieu long : dung de luu tru cac so nguyen lon hon kieu du lieu int
	long e = 100000L;
	printf("e = %ld \n", e);
	
	// Kieu du lieu short : dung de luu tru cac so nguyen nho hon kieu du lieu int
	short minus = 50;
	printf("minus = %hd \n", minus);
	
	return 0;
}
