SECTION .text
global getCpuName
getCpuName:

push rbp
mov rbp, rsp
mov rdi, buffer

mov    eax,80000002
cpuid
mov    [rdi   ],eax
mov    [rdi+ 4],ebx
mov    [rdi+ 8],ecx
mov    [rdi+12],edx

mov    eax,80000003
cpuid
mov    [rsi+16],eax
mov    [rsi+20],ebx
mov    [rsi+24],ecx
mov    [rsi+28],edx

mov    eax,80000004
cpuid
mov    [rsi+32],eax
mov    [rsi+36],ebx
mov    [rsi+40],ecx
mov    [rsi+44],edx

mov eax, buffer
pop rbp
ret

SECTION .bss
buffer: resb 48 
len EQU $ - buffer
