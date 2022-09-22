#pragma once

#include "version_buildnumber.h"

#define MAJOR_VERSION_STR "2022"
#define MAJOR_VERSION_INT 2022

#define SUB_VERSION_STR "09"
#define SUB_VERSION_INT 09

#define RELEASE_NUMBER_STR "1"
#define RELEASE_NUMBER_INT 1

#define BUILD_NUMBER_STR TAG_BUILDNR_STR
#define BUILD_NUMBER_INT TAG_BUILDNR

#define BUILD_STRING MAJOR_VERSION_STR "." SUB_VERSION_STR "." RELEASE_NUMBER_STR "." BUILD_NUMBER_STR
#define VERSION_STRING MAJOR_VERSION_STR "." SUB_VERSION_STR

#ifdef __plist_preprocessor__
#define CAT_PRIVATE_DONT_USE(a,b)			a ## b
#define CAT(a,b)							CAT_PRIVATE_DONT_USE(a,b)
#define MAKE_BUNDLE_VERSION(m,s,r,b)		CAT(m, CAT(., CAT(s,CAT(.,CAT(r,CAT(.,b))))))
#define MAKE_SHORT_BUNDLE_VERSION(m,s)		CAT(m, CAT(., CAT(s,)))
#define BUNDLE_VERSION MAKE_BUNDLE_VERSION(MAJOR_VERSION_INT,SUB_VERSION_INT,RELEASE_NUMBER_INT,BUILD_NUMBER_INT)
#define SHORT_BUNDLE_VERSION MAKE_SHORT_BUNDLE_VERSION(MAJOR_VERSION_INT,SUB_VERSION_INT)
#endif
