void main ()
{
	int num1,num2;
	char op;
		printf("Enter the first number:");
	 		scanf("%d",&num1);
		printf("Enter the Second number:");
			scanf("%d",&num2);
		printf("Enter the operator(+,-,*,/,%%) :");
	   		scanf(" %c",&op);
	   		if(op=='+')
			
			   	printf("Adittion =%d",num1+num2);
			   	
			   	else if(op == '-')
			   	
			   	printf("subtraction = %d",num1-num2);
			   	
			   	else if (op=='*')
			   	printf("multiplication=%d",num1*num2);
			
			   	else if (op=='/')
					if(num2!=0)
			   	printf("Division=%d",num1/num2);
			   	
			   	else
			   	printf("Division by zero is not possible.");
			   	
			   	else if (op=='%')
			   	if(num2!=0)
			   	printf("modulus=%d",num1/num2);
			   	
			   	else
			   	printf("Modulus by zero is not possible.");
			   	
			   	else
			   	("Invalid operator");
			   	
		
			  
			   
			   
	
	
}