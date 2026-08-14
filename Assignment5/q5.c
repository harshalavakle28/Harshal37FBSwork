void main ()
{
	int a=5;
	for(int i=1;i<a;i++){
		for(int k=1 ;k<a-i;k++){
			printf(" ");
		}
		

		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		
	}
	
	
}