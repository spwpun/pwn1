#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int cnt = 2;
    void **addr;
    void *mem_addr;

    mem_addr = malloc(0x40);
    setvbuf(stdout, 0, 2, 0);
    while(cnt > 0)
    {
        puts("See something?>>>");
        read(0, &addr, 8);
        printf("Something you got:%p\n", *addr);
        cnt--;
    }
    puts("Now you can hide something!>>>");
    read(0, &addr, 8); 
    puts(">>>");
    read(0, mem_addr, 0x30);
    //*addr = *mem_addr;
    memcpy(addr, mem_addr, 8);

    exit(0);
}
