//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_queue>, NSProgress;

@interface VMOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)configureProgressWithUnitCount:(long long)arg1;
- (id)init;

@end

