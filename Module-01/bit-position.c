# include <stdio.h>
int main() {
    int a=10, bit_position=1;
    
    printf("Bit status = %d\n", (a >> bit_position) & 1 );
    
    return 0;
}
