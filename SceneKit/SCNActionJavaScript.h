//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
- (id)parameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCustom;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

