//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudQuota/_ICQPageSpecification.h>

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification
{
    NSDictionary *_serverDict;
    NSString *_iconBundleIdentifier;
    NSString *_title;
    NSString *_message;
    NSArray *_messageLinks;
    NSString *_altMessage;
    NSArray *_altMessageLinks;
    ICQLink *_purchaseLink;
    ICQLink *_purchase2Link;
    ICQLink *_bottomLink;
    NSString *_fineprintFormat;
    NSArray *_fineprintLinks;
    NSString *_purchase2LinkVisibleKey;
    NSString *_bottomLinkVisibleKey;
}

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) NSString *bottomLinkVisibleKey; // @synthesize bottomLinkVisibleKey=_bottomLinkVisibleKey;
@property(retain, nonatomic) NSString *purchase2LinkVisibleKey; // @synthesize purchase2LinkVisibleKey=_purchase2LinkVisibleKey;
@property(retain, nonatomic) NSArray *fineprintLinks; // @synthesize fineprintLinks=_fineprintLinks;
@property(retain, nonatomic) NSString *fineprintFormat; // @synthesize fineprintFormat=_fineprintFormat;
@property(retain, nonatomic) ICQLink *bottomLink; // @synthesize bottomLink=_bottomLink;
@property(retain, nonatomic) ICQLink *purchase2Link; // @synthesize purchase2Link=_purchase2Link;
@property(retain, nonatomic) ICQLink *purchaseLink; // @synthesize purchaseLink=_purchaseLink;
@property(retain, nonatomic) NSArray *altMessageLinks; // @synthesize altMessageLinks=_altMessageLinks;
@property(retain, nonatomic) NSString *altMessage; // @synthesize altMessage=_altMessage;
@property(retain, nonatomic) NSArray *messageLinks; // @synthesize messageLinks=_messageLinks;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconBundleIdentifier; // @synthesize iconBundleIdentifier=_iconBundleIdentifier;
@property(readonly, nonatomic) NSDictionary *serverDict; // @synthesize serverDict=_serverDict;
- (void).cxx_destruct;
- (id)copyWithBindings:(id)arg1;
- (id)copy;
- (id)debugDescription;
- (id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2;
- (id)initWithServerDictionary:(id)arg1;

@end

