/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail" */
void  main()
{
    int num;

    printf("Enter the marks: ");
    scanf("%d", &num);
    if(num>75)
    printf("Distinction %d",num ) ;
    else if (num>65)
    printf("First class %d",num );
    else if (num>55)
    printf("Second class %d",num);
    else if (num>=40)
    printf("Pass %d",num);
    else 
    printf("Fail");
    
    
    
}