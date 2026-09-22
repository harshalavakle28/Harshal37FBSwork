int main()
{
    int n, i;
    int num = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        num = num  + 1;
        printf("%d", num);
        if(i < n)
        
            printf(" + ");
        
    }
}