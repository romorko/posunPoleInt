#include <stdio.h>
#include <string.h>
#include <assert.h>
#define POCET 20
//program posunie pole cisel o zadany pocet pozicii vlavo a doplni ho nulami

void vypisPole(const int *pole);

int main()
{
    int veta[POCET]= {2,4,6,8,10,12,14,16,18,20,1,3,5,7,9,11,13,15,17,19};
    size_t posun; //o kolko budem posuvat
    puts("Zadaj posun:");
    scanf("%zu",&posun);
    assert (posun<=POCET); //kontrola aby som neposuval viac ako je prvkov pola
    vypisPole(veta);
    memmove((void *)veta,(void *)(veta+posun),posun*sizeof(int)); //posun
    memset(veta+POCET-posun,0,sizeof(int)*posun); //doplnenie nulami
	vypisPole(veta);
    return 0;
}

void vypisPole(const int *pole)
{
	for(size_t i=0;i<POCET;++i)
    {
        printf("%d ",*(pole+i));
    }
    puts("");
}
