#include "valuesource.h"

ValueSource::ValueSource (int value) : value_(value) {
}

int ValueSource::getValue () {
    return value_;
}
