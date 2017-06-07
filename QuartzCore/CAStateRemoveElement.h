//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveElement : CAStateElement
{
    NSString *_keyPath;
    id _object;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)apply:(id)arg1;
- (_Bool)matches:(id)arg1;

@end

