//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface LKClassGroup : NSObject <NSSecureCoding>
{
    NSString *_classGroupName;
    NSArray *_classes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(readonly, copy, nonatomic) NSString *classGroupName; // @synthesize classGroupName=_classGroupName;
- (void).cxx_destruct;
- (id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2;
- (id)initWithGroupName:(id)arg1 classes:(id)arg2;
- (_Bool)isEqualToLKClassGroup:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

