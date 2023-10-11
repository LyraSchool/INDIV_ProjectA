
#define VIDMEM 0xb800

void puts(char*);

int vMemOffset = 0;

void main()
{
	char* message = "Help";
	int offset = 0;

	puts(message);
/*
	while (*message != '\0')
	{
		putInMemory(VIDMEM, offset, *message);
		offset++;
		putInMemory(VIDMEM, offset, 0x7);
		offset++;
		message++;
	}
*/
	while(1);
}

void puts(char* string)
{
	char* s = string;
	while (*s != '\0')
	{
		putInMemory(VIDMEM, vMemOffset, *s);
		vMemOffset++;
		putInMemory(VIDMEM, vMemOffset, 0x7);
		vMemOffset++;
		s++;
	}
}

