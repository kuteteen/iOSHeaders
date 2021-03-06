//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSObject<OS_dispatch_queue>, NSString;

@interface SUScriptTelephony : SUScriptObject
{
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    struct __CTServerConnection *_telephonyServer;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (_Bool)_checkIfIsAllowed;
- (id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3;
- (id)formattedPhoneNumber:(id)arg1;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *operatorName;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic, getter=isCellularRoaming) id cellularRoaming;
@property(readonly, nonatomic) NSString *countryCode;
- (id)_className;
- (void)dealloc;
- (id)init;

@end

