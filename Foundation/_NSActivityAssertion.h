//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol NSObject, OS_voucher;

__attribute__((visibility("hidden")))
@interface _NSActivityAssertion : NSObject
{
    unsigned long long _options;
    NSString *_reason;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    unsigned char _adoptPreviousVoucher;
    id <NSObject> _xpcBoost;
    BKSProcessAssertion *_processAssertion;
    CDUnknownBlockType _expirationHandler;
    struct os_unfair_lock_s _lock;
    // Error parsing type: AB, name: _ended
}

+ (void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_expireAllActivies;
+ (void)_dumpExpiringActivitives;
+ (id)_expiringActivities;
+ (id)_expirationHandlerExecutionQueue;
+ (id)_expiringTaskExecutionQueue;
+ (id)_expiringAssertionManagementQueue;
- (void)_fireExpirationHandler;
- (void)_reactivate;
- (void)_end;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;

@end

