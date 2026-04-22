//
// Created by larry on 4/22/26.
//
#include <stdio.h>
#include <dst_init.h>
#include <string.h>
#include <unpack_dst.h>

int main() {
    ebunch decoder;
    memset(&decoder, 0, sizeof(ebunch));
    int status = DST_InitDecoder(&decoder);
    if (status!=0) {
        printf("Error initializing decoder\n");
        return -1;
    }
    status = DST_CloseDecoder(&decoder);

    if (status!=0) {
        printf("Error closing decoder\n");
        return -1;
    }
    printf("Hello World!\n");
}
