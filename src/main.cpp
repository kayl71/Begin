#include <stdio.h>
#include"test.h"
#include"tempDir/foo.h"
#include"tempDir/foo2.h"
    
int main(int, char**){
    printf("Hello, from ForTest!\n");
    test();
    foo2();
    foo();
}
