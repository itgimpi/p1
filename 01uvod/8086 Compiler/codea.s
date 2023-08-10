; OF


a: DB -100 ;        a = -100 = 1001.1011 + 1 = 1001.1100 = 9c, 100 = 64 = 0110.0100
b: DB -100;         a = -100 = 
c: DB 0 ; c = 0, -200 ne moze da se upise u 1B

start:

    mov AL, byte a ; Move from RAM into CPU, into Reg. A
    mov BL, byte b ; Move from RAM into CPU, into Reg. B
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    ;sub AL, BL; oduzmi A - B
    mov byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt
