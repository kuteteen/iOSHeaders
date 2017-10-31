//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber;

@interface ASDIAPInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _type;
    _Bool _hasUsedFreeOffer;
    _Bool _hasUsedIntroPricingOffer;
    NSNumber *_adamId;
    NSNumber *_appAdamId;
    NSNumber *_expirationTimestamp;
    NSNumber *_lastModifiedTimestamp;
    NSNumber *_purchaseTimestamp;
    NSNumber *_accountId;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasUsedIntroPricingOffer; // @synthesize hasUsedIntroPricingOffer=_hasUsedIntroPricingOffer;
@property(nonatomic) _Bool hasUsedFreeOffer; // @synthesize hasUsedFreeOffer=_hasUsedFreeOffer;
@property(retain, nonatomic) NSNumber *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *purchaseTimestamp; // @synthesize purchaseTimestamp=_purchaseTimestamp;
@property(retain, nonatomic) NSNumber *lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(retain, nonatomic) NSNumber *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
@property(retain, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

