//Arthur
#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <QSpinBox>
#include "plat.h"
#include "template.h"

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(Template *parent = nullptr , Model *m = nullptr, Plat * plat = nullptr);


signals:

public slots:

private :
   Model * model =  nullptr;
   //std::vector<QSpinBox*> spinBoxList = std::vector<QSpinBox*>();
};

#endif // DETAIL_H
