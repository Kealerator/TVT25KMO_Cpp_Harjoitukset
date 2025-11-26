#include "httpperson.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpPerson *objHttpPerson = new HttpPerson(&a);

    qDebug() << "Kaikki henkilot:\n";
    objHttpPerson->getPersonsData();


    // qDebug() << "Eka henkilo:\n";
    // objHttpPerson->getOnePersonData();

    return a.exec();
}
