#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#include "version.h"	/* ESP firmware header */

#define NODE_VERSION_MAJOR	ESP_SDK_VERSION_MAJOR
#define NODE_VERSION_MINOR	ESP_SDK_VERSION_MINOR
#define NODE_VERSION_REVISION	ESP_SDK_VERSION_PATCH
#define NODE_VERSION_INTERNAL   0

#define NODE_VERSION_STR(x)	#x
#define NODE_VERSION_XSTR(x)	NODE_VERSION_STR(x)

#define NODE_VERSION		"NodeMCU " ESP_SDK_VERSION_STRING "." NODE_VERSION_XSTR(NODE_VERSION_INTERNAL) " built with Docker provided by frightanic.com\n\tbranch: master\n\tcommit: 4095c408e6a8cc9718cb06007b408d0aad15d9cd\n\tSSL: false\n\tBuild type: float\n\tLFS: disabled\n\tmodules: bit,file,gpio,mqtt,net,node,tmr,wifi\n"

#ifndef BUILD_DATE
#define BUILD_DATE		"created on 2018-11-12 00:38\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
