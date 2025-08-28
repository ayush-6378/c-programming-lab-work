#include <stdio.h>

int main() 
{
    unsigned long long bytes;
    double kb, mb, gb;

    printf("Enter the number of bytes: ");
    scanf("%llu", &bytes);

    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;

    printf("\nConversions:\n");
    printf("Kilobytes (KB): %.2f\n", kb);
    printf("Megabytes (MB): %.2f\n", mb);
    printf("Gigabytes (GB): %.2f\n", gb);

    return 0;
}