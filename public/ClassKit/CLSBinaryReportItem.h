//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSActivityReportItem.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>
{
    _Bool _value;
    long long _valueType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(nonatomic) _Bool value; // @synthesize value=_value;
- (void)scalarMultiply:(double)arg1;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

