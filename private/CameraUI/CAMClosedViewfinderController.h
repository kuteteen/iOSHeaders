//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject
{
    id <CAMClosedViewfinderControllerDelegate> _delegate;
    NSMutableSet *__reasonsForClosingViewfinder;
}

@property(readonly, nonatomic) NSMutableSet *_reasonsForClosingViewfinder; // @synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder;
@property(nonatomic) __weak id <CAMClosedViewfinderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (void)cancelDelayedRemovalOfReason:(long long)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2;
- (void)_performDelayedRemovalOfReason:(id)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1;
- (void)addClosedViewfinderReason:(long long)arg1;
@property(readonly, nonatomic, getter=isViewfinderClosed) _Bool viewfinderClosed;
- (id)init;

@end

