#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.67])
AC_INIT([libuuid for mingw32], [1.0], [nasda60@hotmail.com], [libuuid_mingw32])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/clear.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
AC_LIBTOOL_WIN32_DLL
LT_INIT([win32-dll shared static])
LT_LANG([C])

# Checks for libraries.

AC_MSG_CHECKING([for UUID Library])
LIBS="$LIBS -lrpcrt4"
AC_LINK_IFELSE([
  AC_LANG_PROGRAM([[#include <windows.h>
#include <rpc.h>]],
                  [[
UuidCreate(0);
UuidCreateNil(0);
UuidCompare(0,0,0);
UuidFromStringA(0,0);
UuidToStringA(0,0);
UuidIsNil(0,0);
]])],
  [AC_MSG_RESULT(yes);
   UUID_CFLAGS="-DWINVER=0x0501"
   UUID_LIBS="-lrpcrt4"
   LDFLAGS="$LDFLAGS -no-undefined"
   AC_SUBST(UUID_CFLAGS)
   AC_SUBST(UUID_LIBS)
   AC_DEFINE(HAVE_LIB_UUID,1,[UUID Library found])],
  [AC_MSG_ERROR(There isn't Microsoft UUID Library.)])

  AM_CONDITIONAL(HAVE_LIB_UUID,[test -n "$UUID_LIBS"])

AC_CHECK_LIB(m, memcpy, [], [AC_MSG_ERROR([There isn't a MinGW.])])

# Checks for header files.
AC_CHECK_HEADER(windows.h,[],[AC_MSG_ERROR([There isn't WINDOWS.H])])
AC_CHECK_HEADER(rpc.h,[],[AC_MSG_ERROR([There isn't RPC.H])])
AC_CHECK_HEADER(ctype.h,[],[AC_MSG_ERROR([There isn't CTYPE.H])])
AC_CHECK_HEADER(string.h,[],[AC_MSG_ERROR([There isn't STRING.H])])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_TYPES([UUID], [], [AC_MSG_ERROR([There isn't a UUID structure defined by Microsoft.])], [[
#include <windows.h>
#include <rpc.h>]])

# Checks for library functions.

AC_CHECK_FUNC(memcpy, [],[AC_MSG_ERROR([There isn't memcpy func.])])
AC_CHECK_FUNC(tolower, [],[AC_MSG_ERROR([There isn't tolower func.])])
AC_CHECK_FUNC(toupper, [],[AC_MSG_ERROR([There isn't toupper func.])])

AC_OUTPUT
