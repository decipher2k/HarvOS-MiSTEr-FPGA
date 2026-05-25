PHP_ARG_ENABLE([harvos],
  [whether to enable the HarvOS SAPI],
  [AS_HELP_STRING([--enable-harvos],
    [Enable the HarvOS embedded SAPI for HarvTTP and HarvOS supervisor tasks])],
  [no],
  [no])

if test "$PHP_HARVOS" != "no"; then
  PHP_SELECT_SAPI([harvos],
    [static],
    [php_harvos_sapi.c],
    [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DPHP_HARVOS=1])
  PHP_INSTALL_HEADERS([sapi/harvos], [php_harvos_sapi.h])
fi
