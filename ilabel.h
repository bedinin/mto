#ifndef ILABEL_H
#define ILABEL_H

#include <QLabel>

class ILabel : public QLabel
{
    Q_OBJECT
private:
    int id;
public:
    explicit ILabel(QWidget *parent = 0);
    int getId();
    void setId(int val);
signals:

public slots:

};

#endif // ILABEL_H
