void main()
{
    float basic, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);
    if(basic<=5000)
	{
		total=basic+(basic*10/100)
					+(basic*20/100)
    				+(basic*25/100);
	}
	else
	{
	total=basic+(basic*15/100)
					+(basic*25/100)
    				+(basic*30/100);
	}
	printf("Total salary=%f",total);
	
}