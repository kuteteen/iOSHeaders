//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKAbstractSyncController : NSObject
{
    _Bool _isSyncing;
}

@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)syncStateDebuggingInfo:(id)arg1;
- (id)readPersistentValueForKey:(id)arg1;
- (_Bool)readPersistentBoolForKey:(id)arg1;
- (void)writePersistentValue:(id)arg1 forKey:(id)arg2;
- (void)writePersistentBool:(_Bool)arg1 forKey:(id)arg2;
- (id)prefsWriter;
- (id)ckUtilities;

@end

