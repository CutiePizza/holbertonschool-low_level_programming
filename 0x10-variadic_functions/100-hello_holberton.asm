global _start

section .text

_start:
mov rax, 1        ; write(
		mov rdi, 1        ;   STDOUT_FILENO,
		mov rsi, msg      ;   "Hello, Holberton\n",
		mov rdx, msglen   ;   sizeof("Hello, Holberton\n")
		syscall           ; );

section .rodata
msg: db "Hello, Holberton\n", 10
msglen: equ $ - msg

