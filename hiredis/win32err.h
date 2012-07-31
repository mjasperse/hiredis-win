/*
WIN32ERR.H -- translates winsock error codes into short error descriptions
cloned from dmajkic's distribution, https://raw.github.com/dmajkic/redis/2.4/src/win32err.h
*/

#include <string.h>
#include <errno.h>

char * redis_strerror(int code) {
  
    switch(code) {
        case 10004: return "Interrupted system call";
        case 10009: return "Bad file number";
        case 10013: return "Permission denied";
        case 10014: return "Bad address";
        case 10022: return "Invalid argument (not bind)";
        case 10024: return "Too many open files";
        case 10035: return "Operation would block";
        case 10036: return "Operation now in progress";
        case 10037: return "Operation already in progress"; 
        case 10038: return "Socket operation on non-socket"; 
        case 10039: return "Destination address required";
        case 10040: return "Message too long";
        case 10041: return "Protocol wrong type for socket";
        case 10042: return "Bad protocol option";
        case 10043: return "Protocol not supported";
        case 10044: return "Socket type not supported";
        case 10045: return "Operation not supported on socket";
        case 10046: return "Protocol family not supported";
        case 10047: return "Address family not supported by protocol family";
        case 10048: return "Address already in use";
        case 10049: return "Can't assign requested address";
        case 10050: return "Network is down";
        case 10051: return "Network is unreachable";
        case 10052: return "Net dropped connection or reset";
        case 10053: return "Software caused connection abort";
        case 10054: return "Connection reset by peer";
        case 10055: return "No buffer space available";
        case 10056: return "Socket is already connected";
        case 10057: return "Socket is not connected";
        case 10058: return "Can't send after socket shutdown";
        case 10059: return "Too many references, can't splice";
        case 10060: return "Connection timed out";
        case 10061: return "Connection refused";
        case 10062: return "Too many levels of symbolic links";
        case 10063: return "File name too long";
        case 10064: return "Host is down";
        case 10065: return "No Route to Host";
        case 10066: return "Directory not empty";
        case 10067: return "Too many processes";
        case 10068: return "Too many users";
        case 10069: return "Disc Quota Exceeded";
        case 10070: return "Stale NFS file handle"; 
        case 10091: return "Network SubSystem is unavailable"; 
        case 10092: return "WINSOCK DLL Version out of range"; 
        case 10093: return "Successful WSASTARTUP not yet performed"; 
        case 10071: return "Too many levels of remote in path"; 
        case 11001: return "Host not found";
        case 11002: return "Non-Authoritative Host not found"; 
        case 11003: return "Non-Recoverable errors: FORMERR, REFUSED, NOTIMP"; 
        case 11004: return "Valid name, no data record of requested type";
        default: return strerror(code);
    }
}

