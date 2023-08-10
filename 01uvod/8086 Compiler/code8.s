; 5 + -5, ZF = 1
; kako se stvarno predstavljaju negativni brojevi

a:  DB 0x5 ;        a = 5 = 0000.0101
;b: DB 0xfb ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb         <- heksadekadno
;b: DB 0b11111011 ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb   <- binarno
b: DB 251 ; b = -5, 5NK = 1111.1010, 5PK = 1111.1011 = fb           <- dekadno
; 5 je 0000.0101
; njegov nepotpuni komplement je 1111.1010
; njegov potpuni komplement je 1111.1010 + 1 = 1111.1011
; ako je broj negativan, to je -5
; ako je pozitivan, to je 251
; zanimljivo je da se poz. 251 i neg. -5 u racunaru predstavljaju potpuno isto!
c: DB 0 ; c = 0, Write into RAM, on Address &c
; 0000.0101 + 1111.1011 = CF->1 .0000.0000<-ZF

start:

    mov AL, byte a ; Move from RAM into CPU, into Reg. A
    mov BL, byte b ; Move from RAM into CPU, into Reg. B
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    ;sub AL, BL; oduzmi A - B
    mov byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt
