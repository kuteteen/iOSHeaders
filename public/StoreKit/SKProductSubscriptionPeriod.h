//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKProductSubscriptionPeriod : NSObject
{
    unsigned long long _numberOfUnits;
    unsigned long long _unit;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setUnit:(unsigned long long)arg1;
- (void)_setNumberOfUnits:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long unit;
@property(readonly, nonatomic) unsigned long long numberOfUnits;

@end

