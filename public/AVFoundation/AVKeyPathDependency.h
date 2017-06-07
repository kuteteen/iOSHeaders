//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVKVODispatcher, AVTwoPartKeyPath, AVWeakReference, NSString;
@protocol AVCallbackCancellation, OS_dispatch_queue;

@interface AVKeyPathDependency : NSObject
{
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;
    AVKVODispatcher *_KVODispatcher;
    AVWeakReference *_weakReferenceToObject;
    NSString *_dependentKey;
    AVTwoPartKeyPath *_dependencyKeyPath;
    id <AVCallbackCancellation> _leafPropertyChangeNotifier;
}

+ (void)initialize;
- (void)_reactToSecondLevelPropertyChange:(id)arg1;
- (void)_reactToTopLevelPropertyChange:(id)arg1;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1;
- (void)initializationIsCompleteForObject:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3;

@end
