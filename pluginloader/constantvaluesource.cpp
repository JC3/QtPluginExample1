#include "constantvaluesource.h"

ConstantValueSource::ConstantValueSource (int value) : value_(value) {
}

int ConstantValueSource::getValue () {
    return value_;
}
