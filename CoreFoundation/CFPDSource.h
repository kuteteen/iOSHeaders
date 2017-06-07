//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CFPDDataBuffer, CFPrefsDaemon;
@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    const char *_actualPath;
    const char *_pathToTemporaryFileToWriteTo;
    NSObject<OS_dispatch_group> *_inProgressWriteGroup;
    struct __CFSet *_observingConnections;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    short _generationShmemIndex;
    _Bool _handlingRequest;
    _Bool _dirty;
    _Bool _byHost;
    _Bool _managed;
    _Bool _neverCache;
    _Bool _checkedForNonPrefsPlist;
    _Bool _hasDrainedPendingChangesSinceLastReplyToOwner;
    _Bool _restrictedReadability;
    _Bool _waitingForDeviceUnlock;
    _Bool _watchingParentDirectory;
    _Bool _disableBackup;
    _Bool _hasPreviouslyBeenUnableToDetermineSandboxAccess;
}

- (void)dealloc;
- (id)acceptMessage:(id)arg1;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2;
- (void)handleNoPlistFound;
- (void)handleSynchronous;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleAvoidCache;
- (id)copyCachedObservationConnectionForMessage:(id)arg1;
- (void)setObserved:(_Bool)arg1 bySenderOfMessage:(id)arg2;
- (void)stopNotifyingObserver:(long long)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(_Bool *)arg3;
- (int)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (_Bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (_Bool)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)clearCache;
- (struct __CFString *)debugDump;
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (_Bool)hasObservers;
- (void)drainPendingChanges;
- (void)asyncNotifyObserversOfChanges;
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(_Bool)arg1;
- (void)handleDeviceUnlock;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (void)syncWriteToDisk;
- (void)asyncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)setPlist:(id)arg1;
- (void)_writeToDisk:(_Bool)arg1;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)setDirty:(_Bool)arg1;
- (void)updateShmemEntry;
- (_Bool)hasEverHadMultipleOwners;
- (int)owner;
- (short)shmemIndex;
- (id)description;
- (_Bool)byHost;
- (void)removeOwner;
- (void)addOwner:(id)arg1;
- (void)transitionToMultiOwner;
- (void)respondToFileWrittenToBehindOurBack;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)container;
- (struct __CFString *)user;
- (struct __CFString *)domain;
- (_Bool)managed;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (_Bool)getUncanonicalizedPath:(char *)arg1;
- (struct __CFString *)copyUncanonicalizedPath;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPathCreatingIfNecessary:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)cacheActualPath;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)endHandlingRequest;
- (void)beginHandlingRequest;
- (_Bool)shouldBePurgable;

@end

