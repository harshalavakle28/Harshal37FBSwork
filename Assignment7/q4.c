void main()
{
	int arr[5];
	printf("Enter the element:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even number:\n");
	for(int i=0;i<5;i++)
	{
		if (arr[i]%2==0)
		printf("%d ",arr[i]);
		
	}
	printf("\nodd number:\n");
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		printf("%d ",arr[i]);
		
	}
}