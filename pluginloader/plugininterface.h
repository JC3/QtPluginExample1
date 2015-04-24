#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include "valuesource.h"
#include <QtPlugin>

class PluginInterface {
public:
    virtual ~PluginInterface () { }
    virtual void outputValue (ValueSource *source) = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "plugintest.PluginInterface")

#endif // PLUGININTERFACE_H
