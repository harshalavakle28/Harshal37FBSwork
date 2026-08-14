void main()
{
	int n=121,original,digit,reverse=0;
	original=n;
	while(n>0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
    }
    if(original==reverse)
     printf("palindrome ");
    else
     printf("not palindrome ");
}