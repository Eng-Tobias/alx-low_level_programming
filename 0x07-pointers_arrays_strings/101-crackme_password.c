#include <stdio.h>

void write_password_to_file(char *password)
{
FILE *file;
file = fopen("101-crackme_password", "w");

if (file == NULL) {
fprintf(stderr, "Error opening file.\n");
return;
}

fprintf(file, "%s", password);

fclose(file);
}

int main(void)
{
char password[] = "YOUR_EXTRACTED_PASSWORD";

write_password_to_file(password);

printf("Password file created: 101-crackme_password\n");

return (0);
}
