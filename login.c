void login()
{

	char u,p[50];
	int n=1;
	int i;	
	char ch;
	int j;
	
	printf("\nEnter USER ID and PASSWORD below (You have only three chances)");
	
	
	while(n<=3)
   	{
     		printf("\nUSER ID: ");
      		gets(u);
      		printf("\nPASSWORD: ");
      		for(j=0;j<20;j++)
		{
			p[j]=scanf("%c",&ch);
		}	
      		
      		if(global_user==u && global_pass==p)
	        {
         		printf("\nYou have logged in successfully.");
			printf("\nYour password after encryption is :\n");			
			for(i=0;i<Nb*4;i++)
			{
				printf("%02x ",out[i]);				// Output the encrypted text.
			}
			       			   	
      		}
      		else
      		{
         		printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
    		}
	      	n++;
   	}
   		if(n==4)
      		{
		 	jumbled_Array(global_pass);
		}
		
 	
}

