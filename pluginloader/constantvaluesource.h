#ifndef CONSTANTVALUESOURCE_H
#define CONSTANTVALUESOURCE_H

#include "valuesource.h"

class ConstantValueSource : public ValueSource {
    Q_INTERFACES(ValueSource)
public:
    ConstantValueSource (int value);
    int getValue ();
private:
    int value_;
};

#endif // VALUESOURCE_H
