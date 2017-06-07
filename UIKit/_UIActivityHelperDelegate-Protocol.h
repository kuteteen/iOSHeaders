//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString, _UIActivityHelper, _UIActivityMatchingContext, _UIActivityMatchingResults;

@protocol _UIActivityHelperDelegate <NSObject>
- (_Bool)activityHelper:(_UIActivityHelper *)arg1 matchingWithContext:(_UIActivityMatchingContext *)arg2 shouldIncludeSystemActivityType:(NSString *)arg3;
- (void)activityHelper:(_UIActivityHelper *)arg1 didUpdateActivityMatchingResults:(_UIActivityMatchingResults *)arg2;

@optional
- (NSArray *)activityHelper:(_UIActivityHelper *)arg1 activitiesForActivityType:(NSString *)arg2 matchingContext:(_UIActivityMatchingContext *)arg3;
@end

