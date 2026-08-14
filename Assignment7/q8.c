void main ()
{
	int a[100],b[100];
	int i;
	printf("Enter the 5 elemnet of a:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the 5 elemnet of b:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	int j;
	for(i=5,j=0;i<10;i++,j++)
	{
		a[i]=b[j];
	}
	printf("merged array;");
	for(i=0;i<10;i++){
		
		printf("%d ",a[i]);
	}
	
	
	
}