SECTION .text
	GLOBAL cpuid
cpuid:
	mov [rsp-8], rbx
	mov rax, rdi ; параметр 1, rax = page
	mov rcx, rsi ; параметр 2, rcx = subpage
	cpuid
	shl rbx, 32
	or rax, rbx
	shl rcx, 32
	or rdx, rcx
	mov rbx, [rsp-8]
	ret
