#ifndef OXOL_CPU_H
#define OXOL_CPU_H

#define UNKNOWN 0 //if cpu type cannot be inferred, cpu functions will return 0

//will add more archs in the future
#define x86_64 1
#define i686 2
#define arm32 3
#define aarch64 4

struct cpu {
    unsigned short type
};


#endif