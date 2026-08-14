void main ()
{
	int a=5;
	for(int i=a;i>=1;i--){
		for(int k=0;k<a-i;k++){
			printf(" ");
		}
		

		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		
	}
	
	
}