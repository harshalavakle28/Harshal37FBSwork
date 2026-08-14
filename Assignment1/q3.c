//Write a program to check whether a given year is a leap year.
void main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if((year%400==0) || (year%4==0 && year%100 !=0))
	{
		printf("leap year.");
	}
	else
	printf(" Not leap year.");
}