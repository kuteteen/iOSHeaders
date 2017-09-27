//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding>
{
    id <PDScheduledActivityClient> _clientInstance;
    NSObject<OS_dispatch_queue> *_activityQueue;
    NSMutableDictionary *_activityRegistrations;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *activityRegistrations; // @synthesize activityRegistrations=_activityRegistrations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(nonatomic) __weak id <PDScheduledActivityClient> clientInstance; // @synthesize clientInstance=_clientInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2;

@end

