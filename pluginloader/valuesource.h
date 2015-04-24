#ifndef VALUESOURCE_H
#define VALUESOURCE_H

class ValueSource {
public:
    ValueSource (int value);
    int getValue ();
private:
    int value_;
};

#endif // VALUESOURCE_H
