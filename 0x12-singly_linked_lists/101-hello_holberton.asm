section .data
	hello db 'Hello, Holberton', 10  ; 10 is the ASCII code for the newline character

section .text
global main

main:

	; Write the string to the standard output (file descriptor 1)
	mov rax, 1            ; syscall number for sys_write
	mov rdi, 1            ; file descriptor 1 (standard output)
	mov rsi, hello        ; address of the string to write
	mov rdx, 17           ; length of the string (excluding the null terminator and newline character)
	syscall

; Exit the program
	mov rax, 60           ; syscall number for sys_exit
	xor rdi, rdi          ; status code 0
	syscall
