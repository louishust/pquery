#ifndef __COMMON_HPP__
#define __COMMON_HPP__

#ifndef PQVERSION
#define PQVERSION "UNKNOWN"
#endif

#ifndef PQREVISION
#define PQREVISION "UNKNOWN"
#endif

#ifndef PQRELDATE
#define PQRELDATE "UNKNOWN"
#endif

#ifndef MYSQL_FORK
#define MYSQL_FORK "UNKNOWN"
#endif

#ifdef MAXPACKET
#ifndef MAX_PACKET_DEFAULT
#define MAX_PACKET_DEFAULT 4194304
#endif
#endif

template <typename anyType>
std::string asString(anyType value) { return value; }

// Error codes
#endif
