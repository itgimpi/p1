#include<stdio.h>
// bitwise vs logical
int main() {
    /*Logical operators
      prog. 0 je N, sve sem 0 je T 
      rac.  0 je N, 1 je T*/
    int drugo = 1;
    int prvo = !drugo;
    int jan = 123;
    int pet = 0;
    printf("%d %d\n", prvo, drugo);
    printf("%d\n", pet && jan);
    printf("%d\n", pet || jan);

    /* Bitwise operators
       izvrsavaju bitske operacije 
       & | ~ ^ */
    printf("%d\n", 5 && 2);

    return 0;}