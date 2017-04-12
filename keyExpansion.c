void KeyExpansion()			// This function produces Nb(Nr+1) round keys. The round keys are used in each round to encrypt the states.
{
	int i,j;
	unsigned char temp[4],k;
	
					// The first round key is the key itself.
	for(i=0;i<Nk;i++)
	{
		RoundKey[i*4]=Key[i*4];
		RoundKey[i*4+1]=Key[i*4+1];
		RoundKey[i*4+2]=Key[i*4+2];
		RoundKey[i*4+3]=Key[i*4+3];
	}

					// All other round keys are found from the previous round keys.
	while (i < (Nb * (Nr+1)))
	{
					for(j=0;j<4;j++)
					{
						temp[j]=RoundKey[(i-1) * 4 + j];
					}
					if (i % Nk == 0)
					{
						// This function rotates the 4 bytes in a word to the left once.
						// [a0,a1,a2,a3] becomes [a1,a2,a3,a0]

						// Function RotWord()
						{
							k = temp[0];
							temp[0] = temp[1];
							temp[1] = temp[2];
							temp[2] = temp[3];
							temp[3] = k;
						}

						// SubWord() is a function that takes a four-byte input word and 
						// applies the S-box to each of the four bytes to produce an output word.

						// Function Subword()
						{
							temp[0]=getSBoxValue(temp[0]);
							temp[1]=getSBoxValue(temp[1]);
							temp[2]=getSBoxValue(temp[2]);
							temp[3]=getSBoxValue(temp[3]);
						}

						temp[0] =  temp[0] ^ Rcon[i/Nk];
					}
					else if (Nk > 6 && i % Nk == 4)
					{
						// Function Subword()
						{
							temp[0]=getSBoxValue(temp[0]);
							temp[1]=getSBoxValue(temp[1]);
							temp[2]=getSBoxValue(temp[2]);
							temp[3]=getSBoxValue(temp[3]);
						}
					}
					RoundKey[i*4+0] = RoundKey[(i-Nk)*4+0] ^ temp[0];
					RoundKey[i*4+1] = RoundKey[(i-Nk)*4+1] ^ temp[1];
					RoundKey[i*4+2] = RoundKey[(i-Nk)*4+2] ^ temp[2];
					RoundKey[i*4+3] = RoundKey[(i-Nk)*4+3] ^ temp[3];
					i++;
	}
}

