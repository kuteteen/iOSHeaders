//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAppCACommitFuture : NSObject
{
    CDUnknownBlockType _block;
    _Bool _invalidated;
    _Bool _finished;
}

+ (id)scheduledPreCommitFuture:(CDUnknownBlockType)arg1;
+ (id)scheduledPostCommitFuture:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void).cxx_destruct;
- (void)_invoke;
- (void)invalidate;
- (id)initWithPhase:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

