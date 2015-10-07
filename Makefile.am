ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = test_uuid
test_uuid_SOURCES = src/test_uuid.c
test_uuid_LDADD = libuuid.la
test_uuid_CFLAGS = -I$(top_srcdir)/include

lib_LTLIBRARIES = libuuid.la
libuuid_la_LDFLAGS = -version-info 1:0:0

libuuid_la_SOURCES=\
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

