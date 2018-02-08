//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSDate, NSString, NSUUID;

@interface HDCloudSyncEvent : NSObject
{
    _Bool _isInternal;
    NSString *_build;
    long long _operation;
    long long _reason;
    unsigned long long _options;
    long long _type;
    NSString *_syncCirclePrefix;
    NSString *_containerIdentifier;
    NSUUID *_syncID;
    NSUUID *_operationID;
    HDProfile *_profile;
    NSDate *_eventTime;
}

@property(readonly, copy, nonatomic) NSDate *eventTime; // @synthesize eventTime=_eventTime;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) NSUUID *operationID; // @synthesize operationID=_operationID;
@property(readonly, copy, nonatomic) NSUUID *syncID; // @synthesize syncID=_syncID;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy, nonatomic) NSString *syncCirclePrefix; // @synthesize syncCirclePrefix=_syncCirclePrefix;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(readonly, copy, nonatomic) NSString *build; // @synthesize build=_build;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProfile:(id)arg1 build:(id)arg2 internal:(_Bool)arg3 operation:(long long)arg4 reason:(long long)arg5 options:(unsigned long long)arg6 type:(long long)arg7 syncCirclePrefix:(id)arg8 containerID:(id)arg9 syncID:(id)arg10 operationID:(id)arg11;

@end

