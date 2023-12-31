; SF = 1
; Zastavica za znak se podize kad je broj nedativan, 
; tj. kad je prvi bit sleva 1

a: DB 2 ;        a = 2 = 0000.0010
b: DB -3;        a = -3 = 111...
; zbir je 100% oblika SF->1...
c: DB 0 ; c = 0, Write into RAM, on Address &c

start:

    mov AL, byte a ; Move from RAM into CPU, into Reg. A
    mov BL, byte b ; Move from RAM into CPU, into Reg. B
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    ;sub AL, BL; oduzmi A - B
    mov byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt
