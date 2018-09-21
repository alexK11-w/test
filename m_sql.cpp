
йцукайц#include
#include "m_sql.h"

// user: Alex
// psw : admin
// bd  : bd_Alex
m_sql::m_sql()
{

}
m_sql::try1()
{
    QSqlDatabase db = QsqlDatabase::addDatabase("QMYSQL", "mydb");
    db.setHostName("bigblue");
    db.setDatabaseName("flightdb");
    db.setUserName("acarlson");
    db.setPassword("1uTbSbAs");
    bool ok = db.open();
}
