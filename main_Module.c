int main()
{
		
	int ch;
	char ans='y';

	printf("\nWelcome to password manager system using AES");
	
	while (ans=='y' || ans =='Y')
	{
	     	printf("\n");
		printf("\n1.Setup");
		printf("\n2.Login");
		printf("\n3.Decrypt");
		printf("\n4.How to use");
 		printf("\n");
		printf("Please enter your choice :");
		scanf("%d",ch);
	
		if (ch==1||ch==2||ch==3||ch==4)
		{
			
			switch(ch)
			{
	
			case '1': setup();
	   			break;
			case '2': login();
				break;
			//case '3': decrypt();
			//	break;
			case '4': about();
				break;
			default: printf("\n");
			}
		}
		else 
		{
			printf("\nWrong choice entered !");
			printf("\nTry again (y/n) :");
			scanf("%c",&ans);
		}
	}
	

}

