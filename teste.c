printf (char *fmt, ...)
char *str = "joao";
int idade = 12;
prinft("eu sou %s e tenho %d anos", str, idade )

va_list ap;

va_start(ap, format)
%
if 's' va_arg(ap, char *)
if 'd' va_arg(ap, int)