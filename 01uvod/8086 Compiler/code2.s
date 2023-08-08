; My 2nd 8086 Code using Registers (CPU) + RAM
; sabiranje 2 broja, pravilnije
; simulator je na https://yjdoc2.github.io/8086-emulator-web/

;vrednosti koje se sabiraju se prvo upisuju u RAM...
a: DB 3 ; a = 3, Write into RAM, on Address &a
b: DB 2 ; b = 2, Write into RAM, on Address &b
c: DB 0 ; c = 0, Write into RAM, on Address &c

start:

    mov AL, byte a ; Move from RAM into CPU, into Reg. A
    mov AL, byte b ; Move from RAM into CPU, into Reg. B
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    MOV byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt

