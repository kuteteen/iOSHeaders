//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSString, VSAccountMetadataRequest, VSOptional;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowsPrivacyUI;
    _Bool _requiresPrivacyUI;
    _Bool _canVetoAuthentication;
    _Bool _shouldInferFeaturedProviders;
    VSAccountMetadataRequest *_accountMetadataRequest;
    VSOptional *_requestingAppDisplayName;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) VSOptional *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) _Bool shouldInferFeaturedProviders; // @synthesize shouldInferFeaturedProviders=_shouldInferFeaturedProviders;
@property(copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest; // @synthesize accountMetadataRequest=_accountMetadataRequest;
@property(nonatomic) _Bool canVetoAuthentication; // @synthesize canVetoAuthentication=_canVetoAuthentication;
@property(nonatomic) _Bool requiresPrivacyUI; // @synthesize requiresPrivacyUI=_requiresPrivacyUI;
@property(nonatomic) _Bool allowsPrivacyUI; // @synthesize allowsPrivacyUI=_allowsPrivacyUI;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property(readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property(readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property(readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property(readonly, nonatomic) _Bool allowsAuthenticationUI;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

