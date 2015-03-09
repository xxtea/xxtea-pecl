dnl $Id$
dnl config.m4 for extension xxtea
PHP_ARG_ENABLE(xxtea, xxtea support,
[  --enabled-xxtea       Enable xxtea support], [enabled_xxtea="yes"])

dnl Check whether the extension is enabled at all
if test "$PHP_XXTEA" != "no"; then
  dnl Finally, tell the build system about the extension and what files are needed
  PHP_NEW_EXTENSION(xxtea, php_xxtea.c $XXTEA_SOURCES, $ext_shared)
  PHP_SUBST(XXTEA_SHARED_LIBADD)
fi
