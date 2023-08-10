; CF, ZF
; 128 i 128 je 256, kapacitet bajta je samo 255
; tako da se dize zastavica za prekoracenje CF
; zadnjih 8 bitova u resenju je 00000000, dize se i zastavica za nulu

a: DB 128 ; a = 128(10) = 1000.0000(2)
b: DB 128 ; b = 128(10) = 1000.0000(2)
;                C ->   1.0000.0000 -> 00
c: DB 0 ; c = 0, Write into RAM, on Address &c

start:

    mov AL, byte a ; Move from RAM into CPU, into Reg. A
    mov BL, byte b ; Move from RAM into CPU, into Reg. B
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    mov byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt
