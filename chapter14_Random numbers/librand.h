#include <stdio.h>
#include <x86intrin.h>
#include <time.h>
#define getBit(z, k) ((z>>k) & 1)
#define m 0x5bd1e995
#define n 0x71b18589
#define c1 0x5bd1e995
#define c2 0x71b18589

unsigned int prng(unsigned int seed)
{
    unsigned int a[20]={2030826917, 3082427726, 3956945254, 1860262496, 74654617, 2047028154, 4146139604};
    unsigned int b[20]={2388156329, 2350795966, 856776393, 2635440412, 2847918652, 3332540064, 2269267216, 580978650, 3159456094, 96042424, 121901380};
    int i=seed%7, j=seed%11;
    unsigned long int x=a[i], y=b[j];
    unsigned long int z=x^y;
    // Return the computed value or finish successfully.
    return z;
}

unsigned int prng()
{
    unsigned int a[20]={2030826917, 3082427726, 3956945254, 1860262496, 74654617, 2047028154, 4146139604};
    unsigned int b[20]={2388156329, 2350795966, 856776393, 2635440412, 2847918652, 3332540064, 2269267216, 580978650, 3159456094, 96042424, 121901380};
    static unsigned int seed=123456;
    int i=seed%7, j=seed%11;
    unsigned long int x=a[i], y=b[j];
    static unsigned long int z=0;
    z^=(x^y);
    seed^=z;
    // Return the computed value or finish successfully.
    return z;
}

unsigned int prng(int seed)
{
    unsigned int a[20]={2030826917, 3082427726, 3956945254, 1860262496, 74654617, 2047028154, 4146139604};
    unsigned int b[20]={2388156329, 2350795966, 856776393, 2635440412, 2847918652, 3332540064, 2269267216, 580978650, 3159456094, 96042424, 121901380};
    int i=seed%7, j=seed%11;
    unsigned long int x=a[i], y=b[j];
    static unsigned long int z=0;
    z^=(x^y);
    seed^=z;
    // Return the computed value or finish successfully.
    return z;
}

unsigned int prng32(unsigned int seed)
{
    unsigned int x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<k)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    // Return the computed value or finish successfully.
    return z;
}

unsigned int prng32()
{
    static unsigned int seed=0xab;
    unsigned int x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<k)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    // Return the computed value or finish successfully.
    return z;
}

unsigned int prng32_h()
{
    static unsigned int seed=0xab;
    unsigned int r=0, b, x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        k=seed%31;
        b=getBit(z, k);
        r=r+b*(1<<i);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}

unsigned int prng32_sh(unsigned int seed)
{
    unsigned int x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<k)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    // Return the computed value or finish successfully.
    return z;
}

unsigned int trng32_ach()
{
    unsigned int r=0, b, x=0, y=0, z=0, k=5;
    static unsigned long int seed3;
    unsigned long int seed1=(unsigned long int)(&r);
    unsigned long int seed2=(unsigned long int)(&seed3);
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        seed3+=(seed1^seed2)^__rdtsc();
        x=x^c1 ^ clock();
        x+=(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+x;
        y=y*c2;
        z^=x+y;
        seed3=z;
        k=seed3%31;
        b=getBit(z, k);
        r=r+b*(1<<i);
        seed1=seed2;
        seed2=seed3;
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}

unsigned int trng32_ch()
{
    unsigned int r=0, b, x=0, y=0, z=0, k=5;
    static unsigned long int seed3;
    unsigned long int seed1=clock();
    unsigned long int seed2=__rdtsc();
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        seed3+=(seed1^seed2)^(__rdtsc()^clock());
        x=x^m;
        x+=(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed3=z;
        k=seed3%31;
        b=getBit(z, k);
        r=r+b*(1<<i);
        seed1=seed2;
        seed2=seed3;
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
