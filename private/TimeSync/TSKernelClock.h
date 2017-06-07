//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSClock.h>

@interface TSKernelClock : TSClock
{
    unsigned int _service;
    unsigned int _connection;
    struct IONotificationPort *_notificationPort;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
+ (id)availableKernelClockIdentifiers;
- (void)dealloc;
- (id)clockName;
- (_Bool)deregisterAsyncDCLCallback;
- (_Bool)registerAsyncCallback;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned int connection;
@property(readonly, nonatomic) unsigned int service;
- (_Bool)getRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 withError:(id *)arg5;
- (double)hostRateRatio;
- (int)lockState;
- (_Bool)convertFromDomainTime:(unsigned long long *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (_Bool)convertFromMachAbsoluteTime:(unsigned long long *)arg1 toDomainTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (id)initWithClockIdentifier:(unsigned long long)arg1;

@end
