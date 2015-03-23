/**********************************************************\
|                                                          |
| php_xxtea.h                                              |
|                                                          |
| XXTEA for pecl include file.                             |
|                                                          |
| Encryption Algorithm Authors:                            |
|      David J. Wheeler                                    |
|      Roger M. Needham                                    |
|                                                          |
| Code Author:  Ma Bingyao <mabingyao@gmail.com>           |
| LastModified: Mar 9, 2015                                |
|                                                          |
\**********************************************************/

#ifndef PHP_XXTEA_H
#define PHP_XXTEA_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

extern zend_module_entry xxtea_module_entry;
#define phpext_xxtea_ptr &xxtea_module_entry

#define XXTEA_MODULE_NAME        "xxtea"
#define XXTEA_BUILD_DATE         __DATE__ " " __TIME__
#define PHP_XXTEA_VERSION        "1.0.6"
#define XXTEA_AUTHOR             "Ma Bingyao"
#define XXTEA_HOMEPAGE           "https://github.com/xxtea/xxtea-pecl"

ZEND_MINIT_FUNCTION(xxtea);
ZEND_MSHUTDOWN_FUNCTION(xxtea);
ZEND_MINFO_FUNCTION(xxtea);

/* declaration of functions to be exported */
ZEND_FUNCTION(xxtea_encrypt);
ZEND_FUNCTION(xxtea_decrypt);
ZEND_FUNCTION(xxtea_info);

#endif /* ifndef PHP_XXTEA_H */
