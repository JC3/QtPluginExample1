#include "plugin.h"
#include <QDebug>

Q_EXPORT_PLUGIN2(plugin, Plugin)

void Plugin::outputValue (ValueSource *source) {

    qDebug() << "plugin" << source->getValue();

}
