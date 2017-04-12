void Cipher()						// Cipher is the main function that encrypts the PlainText.
{
	int i,j,round=0;

	
	for(i=0;i<4;i++)				//Copy the input PlainText to state array.
	{
		for(j=0;j<4;j++)
		{
			state[j][i] = in[i*4 + j];
		}
	}

	
	AddRoundKey(0);					 // Add the First round key to the state before starting the rounds.
	
							// There will be Nr rounds.
							// The first Nr-1 rounds are identical.
							// These Nr-1 rounds are executed in the loop below.
	for(round=1;round<Nr;round++)
	{
		SubBytes();
		ShiftRows();
		MixColumns();
		AddRoundKey(round);
	}
	
							// The last round is given below.
							// The MixColumns function is not here in the last round.
	SubBytes();
	ShiftRows();
	AddRoundKey(Nr);

							// The encryption process is over.
							// Copy the state array to output array.
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			out[i*4+j]=state[j][i];
		}
	}
}

	char *hex_return(char *stor)
	{
		static unsigned char str[50];
		static unsigned char v;
 		static char c;
 		int i,j,k,len2;
		int len=20;
 		
		for(k=0;k<20;k++)
		{
			str[k]=stor[k];
		}
		
 		
 		for(i=0;i<len;i++)
 		{
  			if(str[i]=='\0')
 			 break;
  		v=str[i];
 		sprintf(&stor[i*2],"%02x",v);
 		}
	 return stor;
} 
