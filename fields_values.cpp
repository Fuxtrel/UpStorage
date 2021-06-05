#include "fields_values.h"
#include "./ui_mainwindow.h"

Fields_values::Fields_values(){}

Fields_values::~Fields_values(){}

bool Fields_values::checkEmail(QString email){
    int count_signature = 0;
    for(int i = 0; i < email.length(); i++){
        if(email[i] == '@' || email [i] == '.'){
            count_signature++;
        }
    }
    if(count_signature < 2){
        qDebug() << "Not enough signature '.' or '@'";
        return false;
    }
    if(email[email.length() - 3] != '.' && email[email.length() - 4] != '.'){
        qDebug() << "Isn't signature in domen";
        return false;
    }
    return true;
}
