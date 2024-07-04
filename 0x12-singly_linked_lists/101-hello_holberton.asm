global main

main:
	mov rax, 1	; Loads the syscall number for SYS_write (which is 1) into RAX
	mov rdi, 1	; Loads the file descriptor for stdout (1) into RDI
	mov rsi, msg	; Loads the address of the msg label (the message to be printed) into RSI(takes const char* buf as a parameter)
	mov rdx, 17	; Loads the number of bytes to write (17 in this case) into RDX
	syscall		; Executes the syscall with the parameters set in the registers. This will write the message to stdout.

	mov rax, 0x3c	; SYS_exit = 0x3c (60 in decimal)
	mov rdi, 0	; exit syscall needs the error code placed in rdi as a parameter
	syscall		; Invoke the syscall (SYS_exit)


msg:
	db 'Hello, Holberton', 0x0a ; Define the message with a newline character at the end
