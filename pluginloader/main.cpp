#include "plugininterface.h"
#include <QPluginLoader>
#include <QDebug>

int main (int argc, char *argv[]) {

    if (argc != 2) {
        qWarning() << "no plugin filename specified.";
        return 1;
    }

    QPluginLoader loader(argv[1]);
    PluginInterface *plugin = qobject_cast<PluginInterface *>(loader.instance());

    if (plugin)
        plugin->outputValue(new ValueSource(42));
    else
        qWarning() << "error:" << loader.errorString();

}
