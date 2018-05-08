#include <cDatabase.hpp>
#include <mysql.h>

#ifndef _MYSQLDATABASE_
#define _MYSQLDATABASE_

class MysqlDatabase : public Database
  {

  public:
    MysqlDatabase();
    ~MysqlDatabase();
    std::string getServerVersion();
    std::string getHostInfo();
    std::string getErrorString();
    bool connect(std::string, std::string, std::string, std::string, int, std::string);
    bool init();
    inline unsigned long long getAffectedRows();

  private:
    MYSQL* conn;

  };
#endif
