/*
This is the source program to copy files
*/
#include<cstdio>

int main(int argc, char* argv[])
{
FILE *source,*destination;
int ch;

if((source=fopen(argv[1],"r"))==NULL)
{
	fprintf(stderr,"Open of %s failed ",argv[1]);
	perror("because");
	return 1;
}
if((destination=fopen(argv[2],"w"))==NULL)
{
	fprintf(stderr,"No destination");
	perror(" ");
	return 1;
}
while((ch=fgetc(source))!=EOF)
	fputc(ch,destination);
fclose(source);
fclose(destination);
return 0;
}