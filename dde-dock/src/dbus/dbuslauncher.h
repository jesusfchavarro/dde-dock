/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusLauncher -p dbuslauncher launcherinterface.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSLAUNCHER_H_1443507634
#define DBUSLAUNCHER_H_1443507634

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <QDebug>


class ItemInfo
{
public:
    QString url;
    QString name;
    QString key;
    QString iconKey;
    qlonglong id;
    qlonglong intsalledTime;

    /*add url*/
    bool isAutoStart=false;
    QString icon;

    ItemInfo();
    ~ItemInfo();

    friend QDebug &operator <<(QDebug &debug, const ItemInfo &obj);

    friend QDBusArgument &operator<<(QDBusArgument &argument, const ItemInfo &obj);

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, ItemInfo &obj);

    static void registerMetaType();
};
Q_DECLARE_METATYPE(ItemInfo)
/*
 * Proxy class for interface com.deepin.dde.daemon.Launcher
 */
class DBusLauncher: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.dde.daemon.Launcher")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.dde.daemon.Launcher"; }
    static inline const char *staticInterfacePath()
    { return "/com/deepin/dde/daemon/Launcher"; }
    static inline const char *staticServiceName()
    { return "com.deepin.dde.daemon.Launcher"; }

public:
    DBusLauncher(QObject *parent = 0);

    ~DBusLauncher();


Q_SIGNALS: // SIGNALS
    void ItemChanged(const QString &in0, ItemInfo in1, qlonglong in2);
    void UninstallFailed(const QString &in0, const QString &in1);
    void UninstallSuccess(const QString &in0);
// begin property changed signals
};

namespace com {
  namespace deepin {
    namespace dde {
      namespace daemon {
        typedef ::DBusLauncher Launcher;
      }
    }
  }
}
#endif