#include "stdio.h"
void nhap(int a[] , int n) {
	for(int i =0 ; i<n ; i++) {
		scanf("%d",&a[i]);
	}
}
void hienthi(int a[] , int n,int k) {
	printf("Buoc %d:",k);
	for(int i = 0 ; i<n ; i++) {
		printf(" %d",a[i]);
	}
	printf("\n");
}
void hoanvi(int &x,int &y) {
	int tg=x;
	x=y;
	y=tg;
}
void sxnb(int a[], int &n) {
	int k=0;
	int i,j ;
	for(i=0; i<n-1; i++) {
		for(j=n-1; j>i; j--) {
			if(a[j]<a[j-1]) {
				hoanvi(a[j],a[j-1]);
			}
		}
		k++;
		hienthi(a,n,k);
	}
}
int main() {
	int n;
	int a[100];
	scanf("%d",&n);
	nhap(a,n);
	sxnb(a,n);
	return 0;
}
