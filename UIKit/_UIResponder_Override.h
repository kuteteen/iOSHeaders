//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override : NSObject
{
    UIResponder *_owner;
    UIResponder *_target;
    long long _types;
}

+ (id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3;
@property(readonly, nonatomic) long long types; // @synthesize types=_types;
@property(readonly, nonatomic) __weak UIResponder *target; // @synthesize target=_target;
@property(readonly, nonatomic) __weak UIResponder *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

