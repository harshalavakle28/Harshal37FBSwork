void  main()
{
    int s1, s2, s3;

    printf("Enter the first side of triangle: ");
    scanf("%d", &s1);

    printf("Enter the second side of triangle: ");
    scanf("%d", &s2);

    printf("Enter the third side of triangle: ");
    scanf("%d", &s3);

    if(s1==s2 && s2==s3)
    printf("The given triangle is equilateral triangle");
    
   	 else if(s1==s2 || s1==s3 || s2==s3)
      	printf("The given triangle is isoscelen triangle");
     	else
     		 printf("The given triangle is isoscelen triangle");
     	
    
}