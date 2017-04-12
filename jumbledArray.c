char *jumbled_Array(char *uname)
{
		int len;
		char temp; 
		len=strlen(uname);
		temp=uname[0];
		uname[0]=uname[len-1];
		uname[len-1]=temp;
	return uname;
}

