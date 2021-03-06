//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INGenericIntentResponse.h"
#import "INIntentResponseExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString, NSUserActivity, _INPBGenericIntentResponse, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INCacheableContainer, INIntentResponseExport, INGenericIntentResponse, NSCopying, NSSecureCoding>
{
    _INPBGenericIntentResponse *_responseMessagePBRepresentation;
    NSUserActivity *_userActivity;
    _INPBIntentResponse *_backingStore;
    long long _code;
}

+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (id)_responseMessagePBRepresentation;
@property(copy, nonatomic) NSDictionary *propertiesByName;
- (id)initWithPropertiesByName:(id)arg1;
- (id)protoData;
- (id)_impl;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool _shouldForwardIntentToApp;
- (long long)_intentHandlingStatus;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)_payloadResponseMessageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool shouldOpenContainingApplication;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

