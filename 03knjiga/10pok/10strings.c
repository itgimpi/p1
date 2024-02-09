#include <stdio.h>
#include <string.h>

int strlen2( char s[] ) {
    int i = 0;
    while ( s[i] != 0 )
        i++;
    return i; }

int strlen3( char s[] ) {
    int i = 0;
    for ( ; s[i] != 0; i++ )
        ;
    return i; }

int strlen4( char *s ) { // s[] == *s
    int i = 0;
    for ( ; *s != 0; s++ )
        i++;
    return i; }

int strlen5( char *s ) { // s[] == *s
    char *p = s;
    for ( ; *p != 0; p++ )
        ;
    return p - s; }

int strlen6( char *s ) { // s[] == *s
    char *p = s;
    for ( ; *p; p++ ) ; // osnovna C logika
    return p - s; }

int strlen7( char *s ) { // s[] == *s
    char *p = s;
    while ( *p ) p++ ; 
    return p - s; }

int main() {
    char s1[] = {'s','t','r','i','n','g'}; // NE VALJA!!!
    char s2[] = {'s','t','r','i','n','g','\0'}; // NE VALJA!!!
    char s[] = "string"; // C sam dodaje 0 na kraju

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%d\n", strlen(s));
    printf("%d\n", strlen2(s));
    printf("%d\n", strlen3(s));
    printf("%d\n", strlen4(s));
    printf("%d\n", strlen5(s));
    printf("%d\n", strlen6(s));
    printf("%d\n", strlen7(s));
    return 0;
}