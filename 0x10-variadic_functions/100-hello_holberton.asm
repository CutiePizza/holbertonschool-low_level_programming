section .data

message db "Hello, Holberton\n", 11

section .text

global _start
_start:
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, 14
syscall
