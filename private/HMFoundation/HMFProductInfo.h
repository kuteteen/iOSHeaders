//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>
{
    long long _productPlatform;
    long long _productClass;
    HMFSoftwareVersion *_softwareVersion;
}

+ (void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2;
+ (id)decodeSoftwareVersionWithCoder:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)productInfo;
@property(readonly, nonatomic) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long productClass; // @synthesize productClass=_productClass;
@property(readonly, nonatomic) long long productPlatform; // @synthesize productPlatform=_productPlatform;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3;
- (id)init;

@end

