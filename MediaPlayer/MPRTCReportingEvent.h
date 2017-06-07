//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPRTCReportingEvent : NSObject
{
    unsigned short _rtcReportingCategory;
    unsigned short _rtcReportingType;
    long long _networkInterfaceType;
}

@property(readonly, nonatomic) unsigned short rtcReportingType; // @synthesize rtcReportingType=_rtcReportingType;
@property(readonly, nonatomic) unsigned short rtcReportingCategory; // @synthesize rtcReportingCategory=_rtcReportingCategory;
@property(nonatomic) long long networkInterfaceType; // @synthesize networkInterfaceType=_networkInterfaceType;
- (id)newRTCReportingPayloadDictionary;
- (id)newRTCReportingMessageDictionary;

@end

