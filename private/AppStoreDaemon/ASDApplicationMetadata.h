//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accountName;
    NSNumber *_accountID;
    NSString *_altDSID;
    NSString *_artworkPath;
    NSString *_bundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_installOrder;
    NSNumber *_itemID;
    NSString *_itemName;
    NSNumber *_purchaserDSID;
    NSNumber *_storeFront;
    NSString *_vendorName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(copy, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *installOrder; // @synthesize installOrder=_installOrder;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1;

@end

