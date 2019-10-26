section .data

message db "Hello, Holberton", 10

section .text

global main
main:
mov edx, 17
mov ecx, message
mov ebx, 1
mov eax, 4
int 0x80

mov eax, 1
int 0x80
