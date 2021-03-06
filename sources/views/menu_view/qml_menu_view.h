#ifndef QML_MENU_VIEW_H
#define QML_MENU_VIEW_H

#include "i_menu_view.h"
#include "../common/qml_item_view.h"

class QmlMenuView: public IMenuView, public QmlItemView
{
    Q_OBJECT

public:
    explicit QmlMenuView(QObject* parent);

    virtual void show(QObject* parentVisualItem) override;
    virtual void setMenuModel(const QStringList& model) override;
};

#endif // QML_MENU_VIEW_H
