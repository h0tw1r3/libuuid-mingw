ACLOCAL_AMFLAGS = -I m4

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = uuid.pc

bin_PROGRAMS = test_uuid
test_uuid_SOURCES = src/test_uuid.c
test_uuid_LDADD = libuuid_mingw.la
test_uuid_CFLAGS = -I$(top_srcdir)/include

lib_LTLIBRARIES = libuuid_mingw.la
libuuid_mingw_la_LDFLAGS = -version-number 1:0:1

libuuid_mingw_la_SOURCES=\
	src/clear.c \
	src/compare.c \
	src/copy.c \
	src/gen_uuid.c \
	src/isnull.c \
	src/parse.c \
	src/unparse.c \
	src/uuid_inner.h \
	include/uuid/uuid.h

includedir=$(prefix)/include/uuid
include_HEADERS=include/uuid/uuid.h

