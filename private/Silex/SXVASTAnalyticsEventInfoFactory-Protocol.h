//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADMediaAnalyticsEventInfo, ADMediaAnalyticsProgressEventInfo;

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id <SXVideoMetadataProviding>)arg2;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SXVideoMetadataProviding>)arg1;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
@end

