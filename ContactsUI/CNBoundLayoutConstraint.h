//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNBoundLayoutConstraint : NSLayoutConstraint
{
    id _object;
    NSString *_keyPath;
}

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constantObject:(id)arg7 keyPath:(id)arg8;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_boundValueDidChange;
- (void)unbind;
- (void)bindConstantToObject:(id)arg1 keyPath:(id)arg2;
- (void)dealloc;

@end

