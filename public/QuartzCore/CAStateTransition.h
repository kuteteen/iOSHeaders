//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_fromState;
    NSString *_toState;
    NSArray *_elements;
}

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSString *toState; // @synthesize toState=_toState;
@property(copy, nonatomic) NSString *fromState; // @synthesize fromState=_fromState;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (double)duration;
- (void)dealloc;
- (id)init;

@end

