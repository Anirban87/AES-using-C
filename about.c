void about()
{
	int num;	
	
	printf("Welcome to the instruction and about window ");
	printf("\nSelect your choice :");
	printf("\n1.Instruction to use ");
	printf("\n2.About the program ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("\n\t\t\tInstructions !");
		printf("\nThe username is a usual plaintext and stored as it is, but");
		printf("\nThe password is encrypted using the AES standards.");
		printf("\nBefore accessing the account the user must set hi account up");
		printf("\nSetting of account means only to have the username and password set");
		printf("\nSince it is AES it requiers a key that is 128 bits long");
		printf("\nkey should be entered in this format : a1 a2 b5 ff..."); 
		printf("\nIf in case the number of trails is exceded then the program changes,");
		printf("\nthe existing password and prints out in a hex format.");
		printf("\nTo retrieve back the password choose the Decrypt() function from selection menu ");
	}
	else if(num==2)
	{	
		printf("\nProgram is developed by :");
		printf("\nPreeshika Agarwal");
		printf("\nAnirban Mukherjee");
		printf("\nDivy Mathur");
		printf("\nAnurag Viplaw");
		printf("\nCSE - OSS Vth semester :)");
	}
	else 
	{
		return;
 	}
	
	return;
}

