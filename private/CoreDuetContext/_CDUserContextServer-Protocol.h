//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDLocalContextServer-Protocol.h>

@class NSArray, _CDContextualPredicate;

@protocol _CDUserContextServer <_CDLocalContextServer>
- (void)valuesForPaths:(NSArray *)arg1 inContextsMatching:(_CDContextualPredicate *)arg2 handler:(void (^)(NSArray *))arg3;
@end
