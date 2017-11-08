#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "WoWLogFormatter.h"
#import "WoWLogManager.h"

FOUNDATION_EXPORT double WoWLogManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char WoWLogManagerVersionString[];

