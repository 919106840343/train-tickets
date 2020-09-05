#ifndef TUI_H
#define TUI_H

#include <QWidget>
#include <QPushButton>

class tui : public QWidget
{
    Q_OBJECT
public:
    explicit tui(QWidget *parent = nullptr);
    void sendSlot3 ();
signals:
    void mySignal3 ();
public slots:
private :
    QPushButton a6;
};

#endif // TUI_H
