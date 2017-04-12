void setup()			
{
	
	char uname;
	char pass[600]; 
	int i,j,k,l;
	
	
	char ch;

	
	printf("\nWelcome to the setup wizard !");
	printf("\nBefore you enter your username and password :-");
	printf("\nUsername should be in characters");
	printf("\nPassword should be in characters");
	printf("\nKey should be in hexadecimals (0-9 & a-f) eg: aa 1b "); 
	printf("\n\nEnter username :");
	gets(uname);
	printf("\nEnter the password :");
	for(j=0;j<20;j++)
	{
		pass[j]=scanf("%c",&ch);
	}	

	global_user=uname;
	
	for(k=0;k<20;k++)
	{	
		global_pass[k]=pass[k];
	}
	
	for(l=0;l<20;l++)
	{
		stor[l]=pass[l];
	}		

	hex_return(stor);					//password to be converted to hexadecimal 
 	
				
	Nk = 128 / 32;							// 128 bit encryption 
	Nr = Nk + 6;

				
	printf("\nEnter the Key in hexadecimal: ");			//Recieve the key from the user
	for(i=0;i<Nk*4;i++)
	{
		scanf("%x",&Key[i]);
	}

	for(i=0;i<Nb*4;i++)
	{
		in[i]=stor[i];
	}


	 KeyExpansion();						// The KeyExpansion routine must be called before encryption.

	 Cipher();

	printf("\nSetup complete !");					


}
