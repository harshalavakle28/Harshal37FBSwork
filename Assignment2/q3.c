void  main()
{
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);
    if(a>b)
    {
    	if(a>c)
    	printf("greatest = %d",a);
    	else
    	printf("greatest = %d",c);
    	
	}
	else
	{
		if(b>c)
		printf("greatest = %d",b);
		else
		printf("greatest = %d",c);
		
	}

    
    
}