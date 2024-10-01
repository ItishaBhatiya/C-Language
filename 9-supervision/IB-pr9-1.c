#include<stdio.h>
void main(){
	int i;
	FILE *ef,*of;
	
	ef=fopen("C:\\Users\\123\\Desktop\\even.txt","w");
	of=fopen("C:\\Users\\123\\Desktop\\odd.txt","w");
	
	for(i=50;i<=70;i++){
		if(i%2==0){
			printf("%d\n",i);
			fprintf(ef,"%d",i);
		}
		else if(i%2!=0){
			printf("%d",i);
			fprintf(of,"%d",i);
		}
	}
	fclose(ef);
	fclose(of);
	
}
