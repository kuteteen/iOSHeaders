//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSAccountStore, VSOptional;

@interface VSAccount : NSObject
{
    VSAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_accountDescription;
    VSOptional *_optionalIdentityProviderDisplayName;
    VSOptional *_identityProviderID;
    NSString *_username;
    VSOptional *_authenticationToken;
}

@property(retain, nonatomic) VSOptional *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property(retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName; // @synthesize optionalIdentityProviderDisplayName=_optionalIdentityProviderDisplayName;
@property(copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(copy, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property(nonatomic) __weak VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *identityProviderDisplayName;
- (id)init;
@property(retain, nonatomic) VSOptional *keychainItem;

@end

