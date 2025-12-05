#ifdef _WIN32
// Se for Windows, a string de comando é "cls"
char clear_Command[] = "cls";
#else
// Caso contrário (Linux, macOS), a string de comando é "clear"
char clear_Command[] = "clear";
#endif

#ifndef USED
#define USED

int used = 0; // contador da quantidade de contatos

#endif
