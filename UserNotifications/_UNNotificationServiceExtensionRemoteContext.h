//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/_UNNotificationServiceExtensionContext.h>

#import <UserNotifications/_UNNotificationServiceExtensionRemoteXPCInterface-Protocol.h>

@class NSString, UNNotificationServiceExtension;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface>
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasRepliedFlag
    UNNotificationServiceExtension *_extensionInstance;
}

@property(retain, nonatomic) UNNotificationServiceExtension *extensionInstance; // @synthesize extensionInstance=_extensionInstance;
- (void).cxx_destruct;
- (id)_stageAttachmentsForNotificationContent:(id)arg1;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

