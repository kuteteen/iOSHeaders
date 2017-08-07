//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NNMKDeviceRegistryHolder;

@interface NNMKSyncController : NSObject
{
    id <NNMKDeviceRegistryHolder> _delegate;
}

@property(nonatomic) __weak id <NNMKDeviceRegistryHolder> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mailboxWithId:(id)arg1;
- (id)mailboxForMessageWithId:(id)arg1;
- (void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)groupMessagesByMailboxId:(id)arg1;
- (id)deviceRegistry;
- (id)mailboxesToSync;
- (_Bool)isMessage:(id)arg1 fromMailbox:(id)arg2;
- (id)watchAttachmentContentIdFromContentId:(id)arg1;
- (id)messageIdFromWatchMessageId:(id)arg1;
- (id)watchMessageIdFromMessageId:(id)arg1;
- (_Bool)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1;
- (_Bool)doesMessageBelongToSyncedMailboxes:(id)arg1;
- (_Bool)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2;
- (_Bool)canSyncMessage:(id)arg1 forMailbox:(id)arg2;
- (id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2;
- (id)removeInvalidMailboxesFromMailboxSelection:(id)arg1;
- (id)filterMessages:(id)arg1 byAlreadySynced:(_Bool)arg2 byMailbox:(id)arg3;
- (_Bool)_validateMessage:(id)arg1;
- (_Bool)canSyncMailbox:(id)arg1;

@end

