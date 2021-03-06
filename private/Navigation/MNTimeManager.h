//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNObserverHashTable;

__attribute__((visibility("hidden")))
@interface MNTimeManager : NSObject
{
    MNObserverHashTable *_timeManagerObservers;
    id <MNTimeProvider> _provider;
}

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;
@property(retain, nonatomic) id <MNTimeProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)_resetToDefaultProvider;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

