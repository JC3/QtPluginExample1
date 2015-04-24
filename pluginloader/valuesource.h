#ifndef VALUESOURCE_H
#define VALUESOURCE_H

#include <QtPlugin>

class ValueSource {
public:
    virtual ~ValueSource () { }
    virtual int getValue () = 0;
};

Q_DECLARE_INTERFACE(ValueSource, "plugintest.ValueSource")

#endif // VALUESOURCE_H
