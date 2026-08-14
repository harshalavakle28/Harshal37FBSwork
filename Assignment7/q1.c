void main()
{
	int arr[5];
	printf("Enter the element:");
	for(int i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]<min){
			min=arr[i];
		
		}
		if(arr[i]>max)
		 	max=arr[i];
		 
	}
	printf("\nThe min element: %d\n",min);
		printf("The max element: %d\n",max);
}