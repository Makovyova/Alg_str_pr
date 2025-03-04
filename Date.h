#ifndef DATE_H
#define DATE_H

class Date {
public:
    int year;
    int month;
    int day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};

#endif // DATE_H