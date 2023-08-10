; 5 + -5, ZF = 1


a: DB 0x5 ;        a = 5 = 0000.0101
;b: DB 0xfb ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb
;b: DB 0b11111011 ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb 
b: DB 251 ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb 
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
