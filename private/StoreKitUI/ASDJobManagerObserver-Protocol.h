//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDJobManager, NSArray;

@protocol ASDJobManagerObserver <NSObject>

@optional
- (void)jobManager:(ASDJobManager *)arg1 updatedStateOfJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 updatedProgressOfJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 completedJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 changedJobs:(NSArray *)arg2;
@end

