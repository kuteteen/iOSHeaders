//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceStorage : NSObject
{
    NSMutableDictionary *_backgroundImages;
}

+ (long long)typicalBarPosition;
- (void).cxx_destruct;
- (id)allBackgroundImages;
- (void)setAllBackgroundImages:(id)arg1;
- (_Bool)hasAnyCustomBackgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;

@end

