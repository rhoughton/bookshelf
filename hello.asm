section .data
    text db "Hello, World",10
    ;db stands for define bytes 10 means new line
    ;text is the name of this range of bytes
section .text
    global _start

_start:
mov rax, 1
mov rdi, 1
mov rsi, text
mov rdx, 14
syscall
mov rax, 60
mov rdi, 0
syscall 
;syscall is when a program requests a service from kernal
;all syscalls will have a # associated w/ them
;syscalls also take arguments (inputs)