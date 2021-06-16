extern base
extern limit

gdtr DW 0 ; For limit storage
     DD 0 ; For base storage
 
setGdt:
   XOR   EAX, EAX
   MOV   AX, DS
   SHL   EAX, 4
   ADD   EAX, base
   MOV   [gdtr + 2], eax
   MOV   EAX, limit
   SUB   EAX, base
   MOV   [gdtr], AX
   LGDT  [gdtr]
   RET

reloadSegments:
   ; Reload CS register containing code selector:
   lgdt [gdtr]
   JMP   0x08:reload_CS ; 0x08 points at the new code selector
reload_CS:
   ; Reload data segment registers:
   MOV   AX, 0x10 ; 0x10 points at the new data selector
   MOV   DS, AX
   MOV   ES, AX
   MOV   FS, AX
   MOV   GS, AX
   MOV   SS, AX
   RET

