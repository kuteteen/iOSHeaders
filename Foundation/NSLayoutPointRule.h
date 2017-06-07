//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRule-Protocol.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject <NSLayoutRule>
{
    NSLayoutPoint *_firstLayoutPoint;
    NSLayoutPoint *_secondLayoutPoint;
}

@property(readonly, copy) NSLayoutPoint *secondLayoutPoint; // @synthesize secondLayoutPoint=_secondLayoutPoint;
@property(readonly, copy) NSLayoutPoint *firstLayoutPoint; // @synthesize firstLayoutPoint=_firstLayoutPoint;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *identifier;
- (id)makeChildRules;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

