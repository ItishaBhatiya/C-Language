#include<stdio.h>
void main()
{
	FILE *fp,*fp1;
	int n=5,m=10;
	
	fp = fopen("C:\\Users\\123\\Desktop\\read.txt","r");
	fp1 = fopen("C:\\Users\\123\\Desktop\\write.txt","a");
	
	if(fp == NULL)
	{
		printf("file openning");
		return;
	}
	
	fscanf(fp,"%d%d",&n,&m);
	
	fprintf(fp1,"\n%d\n%d",n,m);
	
	fclose(fp);
	fclose(fp1);
}
