section .data
hello_msg db 'Hello, Holberton', 0    ; Null-terminated string for printf

section .text
extern printf
global _start

_start:
; Prepare arguments for printf
mov rdi, hello_msg  ; Pointer to the format string
call printf          ; Call printf

; Exit the program
; Exit code 0
mov rax, 60          ; syscall: exit
xor rdi, rdi         ; status: 0
syscall
