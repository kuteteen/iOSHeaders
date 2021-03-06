//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSSet;

@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSSet *_properties;
    NSDictionary *_relationships;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertySetWithProperties:(id)arg1;
+ (id)emptyPropertySet;
@property(readonly, nonatomic) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSSet *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
- (_Bool)containsPropertySet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;

@end

