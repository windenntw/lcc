#include "c.h"
#undef yy
#define yy \
xx(alpha/osf,    alphaIR) \
xx(m1,   m1IR) \
xx(cpu32,   cpu32IR) \
xx(mips/irix,    mipsebIR) \
xx(wu1000,    wu1000IR) \
xx(sparc/sun,    sparcIR) \
xx(sparc/solaris,solarisIR) \
xx(x86/win32,    x86IR) \
xx(x86/linux,    x86linuxIR) \
xx(symbolic/osf, symbolic64IR) \
xx(symbolic/irix,symbolicIR) \
xx(symbolic,     symbolicIR) \
xx(bytecode,     bytecodeIR) \
xx(null,         nullIR)

#undef xx
#define xx(a,b) extern Interface b;
yy

Binding bindings[] = {
#undef xx
#define xx(a,b) #a, &b,
yy
	NULL, NULL
};
#undef yy
#undef xx
