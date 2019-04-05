//Arthur
#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include "plat.h"
#include "template.h"

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(Template *parent = nullptr , Plat * plat = nullptr);

signals:

public slots:
};

#endif // DETAIL_H
