#ifndef FIELDS_VALUES_H
#define FIELDS_VALUES_H

#include <QMainWindow>


class Fields_values{

public:
    Fields_values();
    ~Fields_values();

    QString regemail;
    QString regfio;
    QString regpass;
    QString email;
    QString pass;

    bool checkEmail(QString email);
};

#endif // FIELDS_VALUES_H
