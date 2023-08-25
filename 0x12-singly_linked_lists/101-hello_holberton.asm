global main
extern printf
main:
mov edi, format
xor eax, eax
call printf
move eax, 0
returnformat:db 'Hello, Holberton\n',0
