//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrightnessSystemClient;

@interface PKBacklightController : NSObject
{
    BrightnessSystemClient *_brightnessClient;
}

- (void).cxx_destruct;
- (void)_updateBacklightNits:(float)arg1 period:(double)arg2;
- (void)setBacklightMinimumEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)init;

@end

