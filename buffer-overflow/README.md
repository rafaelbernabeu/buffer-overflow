# buffer-overflow

To disable stack protection compile with:

```
gcc program.c -o bin/program -fno-stack-protector -z execstack
```

Warning: the `gets' function is dangerous and should not be used.

See [inject-shellcode](https://github.com/rafaelbernabeu/buffer-overflow/blob/master/inject-shellcode/README.md)\
See [override-variable](https://github.com/rafaelbernabeu/buffer-overflow/blob/master/override-variable/README.md)

See [gdb](https://github.com/rafaelbernabeu/rabook/blob/master/linux/gdb.md)\
See [shell-storm](http://shell-storm.org/shellcode/)\
See [exploit-exercises](https://exploit-exercises.lains.space/)\
See [binary-exploitation](https://www.youtube.com/playlist?list=PLhixgUqwRTjxglIswKp9mpkfPNfHkzyeN)
