int getint()
{
	int n;
	scanf("%d",&n);
	
	return n;
}

/*float getpi()
{
	return 3.14;
}

int sum(int a,int b)
{
	return a+b;
}

//int sum(int a,int b)
//{

//	printf("enter A:");
//	scanf("%d",&a);
//	printf("enter B:");
//	scanf("%d",&b);
	
//	return a+b;
//}




int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

int nsum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum +=i;
	}
	return sum;
}

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f *=i;
	}
	return f;
}*/

void arraysum(int a[],int n)
{
	int i,sum=0;
	for(i=0 ;i<n; i++)
	{
		sum += a[i];
	}
	printf("%d",sum);
}

arrayinput(int a[],int n)
{
	int i;
	for(i=0 ;i<n; i++)
	{
		printf("enter a[%d] : ",i);
		a[i]=getint();
	}
}

int arraylength(char a[])
{
	int i,len=0;
	for(i=0; a[i]!=NULL; i++)
	{
		len++;   
	}
	//printf("length = %d",len);
	return len;	
}

void strtitle(char str[])
{
	int i;
	
	if(str[0]>=97 && str[0]<=122)
	{
		str[0] -= 32;
	}
	
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}
}

void loop(int s,int e)
{
	printf("%d ",s++);
	if(s<=e)
	{
		loop(s,e);
	}
}

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}


