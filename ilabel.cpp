#include "ilabel.h"

ILabel::ILabel(QWidget *parent) :
    QLabel(parent)
{
}

int ILabel::getId()
{
    return this->id;
}

void ILabel::setId(int val)
{
    this->id = val;
}
