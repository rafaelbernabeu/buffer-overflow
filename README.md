# buffer-overflow

To disable stack protection compile with:

```
gcc program.c -o bin/program -fno-stack-protector
```
Enter AAAAAAAAAAAAAAAA to override the key value

Warning: the `gets' function is dangerous and should not be used.
