//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyValueObservance, NSKeyValueObservationInfo, NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueShareableObservationInfoKey : NSObject
{
    _Bool _addingNotRemoving;
    NSKeyValueObservationInfo *_baseObservationInfo;
    NSObject *_additionObserver;
    NSKeyValueProperty *_additionProperty;
    unsigned long long _additionOptions;
    void *_additionContext;
    NSObject *_additionOriginalObservable;
    NSKeyValueObservance *_removalObservance;
    unsigned long long _removalObservanceIndex;
    unsigned long long _cachedHash;
}

@end

