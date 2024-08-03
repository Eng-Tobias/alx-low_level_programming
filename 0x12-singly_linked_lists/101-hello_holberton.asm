section .data
    hello db 'Hello, Holberton', 10  ; The string to print with a newline character

section .text
    extern printf
    global main
    global _start

_start:
    ; Set up the arguments for printf
    mov rdi, hello         ; First argument: the format string
    call printf            ; Call printf function

    ; Exit the program
    mov rax, 60            ; The system call for exit
    xor rdi, rdi           ; Exit code 0
    syscall
