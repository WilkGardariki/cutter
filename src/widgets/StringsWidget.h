#ifndef STRINGSWIDGET_H
#define STRINGSWIDGET_H

#include "DockWidget.h"
#include <memory>

class MainWindow;
class QTreeWidgetItem;

namespace Ui
{
    class StringsWidget;
}

class StringsWidget : public DockWidget
{
    Q_OBJECT

public:
    explicit StringsWidget(MainWindow *main, QWidget *parent = 0);
    ~StringsWidget();

    void setup() override;

    void refresh() override;

    void fillStrings();

private slots:
    void on_stringsTreeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    std::unique_ptr<Ui::StringsWidget> ui;
    MainWindow      *main;

    void fillTreeWidget();
    void setScrollMode();
};

#endif // STRINGSWIDGET_H
