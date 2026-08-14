void pallindrome();
void main (){
	pallindrome();
}
void pallindrome(){
	int num, original, reverse;
	printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    if(original==reverse)
    {
    	 printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}