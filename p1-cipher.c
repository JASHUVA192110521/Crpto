#include<stdio.h>
#include<string.h>
#define max 100
int main(){
	int i,k;
	char a[max],b[max];
	printf("enter the plain text=");
	scanf("%[^\n]s",&a);
	printf("enter key =");
	scanf("%d",&k);
	int l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]=(a[i]+k-'a')%26+'a';
		}
		else if(a[i]>='A' && a[i]<='Z'){
			a[i]=(a[i]+k-'A
			')%26+'A';
		}
	}
    printf("encrypted text:%s",a);
	
}
