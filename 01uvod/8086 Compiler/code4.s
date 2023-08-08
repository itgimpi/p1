; Bez zastavice za prenos
; opet sabiranje 2 veca broja
; simulator je na https://yjdoc2.github.io/8086-emulator-web/

; vrednosti koje se sabiraju se prvo upisuju u RAM...
; ali sada se za podatke koristi rec, Word, 2 bajta, ne samo 1
a: DW 100 ; a = 100, malo veci broj, ali ide u 2B
b: DW 200 ; b = 200, malo veci broj, ali ide u 2B
c: DW 0 ; c = 0, za zbir

start:

    mov AX, word a ; A = 100
    mov AX, word b ; B = 200
          
    add AX, BX; saberi A + B, zbir upisi u 2 bajta A registra
    ; 100 + 200 je 300
    ; 300 < 30000, taj broj moze da se predstavi sa 2B (16b)
    ; rezultat je tacan, zastavica za prenos nije podignita ( CF = 0 )
    mov word c, AX ; Move from CPU, Reg. B, into RAM, address &c
    ;zbir se upise u RAM, svi podaci su u RAMu

    ;mov AH, 0x13 ; kao return 0 u C-u
    ;int 0x10  ; BIOS interrupt

