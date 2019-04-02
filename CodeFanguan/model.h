#ifndef MODEL_H
#define MODEL_H
#include <QString>

class Model{
private:
    bool connected;
    QString langage = "French";

public:
    bool getConnected(){return connected;}
    void setConnected(bool b){connected = b;}

    const QString getLangage() {return langage;}
};

#endif // MODEL_H
