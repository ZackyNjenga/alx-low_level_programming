section .data 
    hello_fmt db "Hello, Holberton", 0 ; Nulll-terminated string format 

setion .text 
   global main 
   extern printf 

main: 
     push rbp
     move rdi, hello_fmt
     call printf
     pop rbp
     ret


section .bss
     ; Define any uninitialized variables here if needed
