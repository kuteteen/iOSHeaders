//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSString;

@interface CLSMetaProperty : CLSObject
{
    NSString *_name;
    id <CLSMetaPropertyValue> __value;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <CLSMetaPropertyValue> _value; // @synthesize _value=__value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CLSMetaPropertyValue> value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

