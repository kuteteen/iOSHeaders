//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSKeyValueObservingPrivate)
+ (_Bool)_shouldAddObservationForwardersForKey:(id)arg1;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(_Bool)arg2;
- (id)_implicitObservationInfo;
- (void)_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_changeValueForKeys:(id *)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)_didChangeValuesForKeys:(id)arg1;
- (void)_willChangeValuesForKeys:(id)arg1;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
@end

