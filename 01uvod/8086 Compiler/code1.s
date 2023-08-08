; My 1st 8086 Code using Registers only (CPU)
; sabiranje 2 broja, pomalo naivno...
; simulator je na https://yjdoc2.github.io/8086-emulator-web/

start:

    mov AL, 3 ; A <- 3, u 1 bajt registra A upisi 3
    mov BL, 2 ; B <- 3, u 1 bajt registra B upisi 2
          
    add AL, BL; saberi A + B, zbir upisi u 1 bajt A registra
    ;zbir se upise u A, samim tim se izgubi prvi sabirak 

