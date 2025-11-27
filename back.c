#include <stdio.h>

int main() {
    int hour, minute;
    int sourceOffset, targetOffset;

    printf("Enter time (HH MM): ");
    scanf("%d %d", &hour, &minute);

    printf("Enter source timezone offset (e.g., +5, -3): ");
    scanf("%d", &sourceOffset);

    printf("Enter target timezone offset (e.g., +9, -2): ");
    scanf("%d", &targetOffset);

    int convertedHour = hour - sourceOffset + targetOffset;

    if (convertedHour >= 24) convertedHour -= 24;
    if (convertedHour < 0) convertedHour += 24;

    printf("\nConverted Time: %02d:%02d\n", convertedHour, minute);

    return 0;
}