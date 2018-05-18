//
//  WoWLogManager.h
//  CocoaLumberjack
//
//  Created by 郑振兴 on 2017/11/8.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#if DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelVerbose;
#else
static const DDLogLevel ddLogLevel = DDLogLevelWarning;
#endif
@interface WoWLogManager : NSObject
@property (nonatomic, strong) DDFileLogger *fileLogger;
+ (WoWLogManager *)shareManager;
- (void)start; // 配置日志信息
- (NSArray *)getAllLogFilePath; // 获取日志路径
- (NSArray *)getAllLogFileContent; // 获取日志内容
@end
