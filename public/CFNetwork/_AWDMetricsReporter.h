//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _AWDMetricsReporter : NSObject
{
}

+ (void)_reportCacheMetricsToAWD:(id)arg1;
+ (void)_reportStreamTaskTimingDataToAWD:(struct PerformanceTiming *)arg1;
+ (void)_reportTimingDataToAWD:(struct PerformanceTiming *)arg1 request:(id)arg2;
+ (id)getAWDServerConnectionForCFNetwork;

@end

