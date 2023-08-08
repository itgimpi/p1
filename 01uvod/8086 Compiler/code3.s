; Podizanje zastavice za prenos
; opet sabiranje 2 broja
; simulator je na https://yjdoc2.github.io/8086-emulator-web/

;vrednosti koje se sabiraju se prvo upisuju u RAM...
a: DB 100 ; a = 100, malo veci broj
b: DB 200 ; b = 200, malo veci broj
c: DB 0 ; c = 0, za zbir

start:

    mov AL, byte a ; A = 100
    mov AL, byte b ; B = 200
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    ; 100 + 200 je 300
    ; 300 > 255, taj broj ne moze da se predstavi samo sa 1B (8b)
    ; rezultat je netacan, zastavica za prenos podignita ( CF = 1 )
    MOV byte c, AL ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    mov AH, 0x13 ; kao return 0 u C-u
    int 0x10  ; BIOS interrupt

