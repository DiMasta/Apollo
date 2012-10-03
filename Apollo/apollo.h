#ifndef APOLLO_H
#define APOLLO_H

#include <QMainWindow>

namespace Ui {
class Apollo;
}

class Apollo : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Apollo(QWidget *parent = 0);
    ~Apollo();

public slots:
    void OutputCheckButtonClicked();
    
private:
    Ui::Apollo *ui;
};

#endif // APOLLO_H
