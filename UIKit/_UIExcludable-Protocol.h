//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString;
@protocol _UIExcludable;

@protocol _UIExcludable <NSObject>
- (NSString *)_briefDescription;
- (void)_exclude;
- (_Bool)_isExcludedByExcludable:(id <_UIExcludable>)arg1;
- (_Bool)_canExcludeOtherExcludables;
@end

