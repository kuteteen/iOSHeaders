//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INSiriAuthorizationManagerExport <NSObject, JSExport>
+ (_Bool)_isSiriAuthorizationRestricted;
+ (void)_requestSiriAuthorization:(void (^)(long long))arg1 auditToken:(CDStruct_6ad76789)arg2;
+ (long long)_siriAuthorizationStatusForAppID:(NSString *)arg1;
- (id)init;
@end

