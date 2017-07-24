//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreNFC/NFCTagCommandConfiguration.h>

@class NSData;

@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration
{
    unsigned char _flags;
    unsigned long long _manufacturerCode;
    unsigned long long _customCommandCode;
    NSData *_requestParameters;
}

@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSData *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(nonatomic) unsigned long long customCommandCode; // @synthesize customCommandCode=_customCommandCode;
@property(nonatomic) unsigned long long manufacturerCode; // @synthesize manufacturerCode=_manufacturerCode;
- (id)asNSDataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 maximumRetries:(unsigned long long)arg4 retryInterval:(double)arg5;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
