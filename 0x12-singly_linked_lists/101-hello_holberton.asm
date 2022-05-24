	SECTIOIN .data
fmt: 	db  "%s", 10, 0
msg:	db "Hello, HolbertoN", 0

	SECTION .text
	extern printf
	global main
main:
	mob esi, msg
	mov edi, printf
	mov eax, 0
	call printf

	mov eax, 0
	ret
