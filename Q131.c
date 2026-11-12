/* Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. */

#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    const char *day_names[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", day_names[d], d);
    }

    return 0;
}