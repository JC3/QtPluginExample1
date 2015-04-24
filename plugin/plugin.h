#ifndef PLUGIN_H
#define PLUGIN_H

#include "../pluginloader/plugininterface.h"

class Plugin : public QObject, public PluginInterface {
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
public:
    void outputValue (ValueSource *source);
};

#endif // PLUGIN_H
