//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    long long _keyType;
}

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;
@property(readonly) long long keyType; // @synthesize keyType=_keyType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithKeyType:(long long)arg1;

@end

