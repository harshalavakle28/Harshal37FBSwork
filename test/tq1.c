void main() {
	char str[100];
	int i,count=1;
	printf("Enter the string:");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
		count++;
	}
	printf("the total number of words are:%d",count);
	


}