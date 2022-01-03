#include <windows.h>

#include <direct.h> // _getcwd
#include <stdlib.h> // free, perror
#include <stdio.h>  // printf
#include <string.h> // strlen

int CALLBACK
WinMain(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR     lpCmdLine,
		int       nShowCmd)
{
	MessageBox(0, "This is Handmade Hero.", "Handmade Hero", MB_OK | MB_ICONINFORMATION);

	char* buffer;

	// Get the current working directory:
	if ((buffer = _getcwd(NULL, 0)) == NULL)
		perror("_getcwd error");
	else
	{
		printf("%s \nLength: %zu\n", buffer, strlen(buffer));
		free(buffer);
	}

	return(0);
}