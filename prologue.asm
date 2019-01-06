push rbp
mov rbp, rsp
sub rsp, 0x20

#rbp is register base pointer
#rsp register stack pointer (top)
#moving from high memory to low seems to be the thing to do on the stack!