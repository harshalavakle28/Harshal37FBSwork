// Write a program to check whether a given character is a vowel or consonant.
void main (){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'
	   ||ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
	   {
		printf("vowel");
	}
	else
		printf("consonant");
}