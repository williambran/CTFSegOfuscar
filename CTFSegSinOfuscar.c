#include <stdio.h>
#include <string.h>

int main(void) {

	int authorized = 0;
	char contrasenia[16] = "i8W4HeyDL5SYo8H2";
	char usr_pass[30];




	printf("Ingresar la contrasenia: ");
	scanf("%s", usr_pass);
	
	char dos[13] = "65ie36vuB7EbK";
	strncat(contrasenia, dos, 13);

	if (strcmp(contrasenia, usr_pass) == 0) {
        	authorized = 1;
	}

	if (authorized) {
		printf("*** ACCSESO CONCEDIDO ***\nUNAM{N07h1nG 8e773r 7H4N 08FuZc473d C }");
	}
	else{
		printf("*** ACCSESO DENEGADO ***\n");
	}
}
