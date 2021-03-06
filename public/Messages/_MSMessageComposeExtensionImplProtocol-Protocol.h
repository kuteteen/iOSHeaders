//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSMessageComposeExtensionProtocol.h"

@class BKSAnimationFenceHandle, MSConversation, MSMessage, MSRichLink, UIViewController, _MSMessageMediaPayload;

@protocol _MSMessageComposeExtensionImplProtocol <_MSMessageComposeExtensionProtocol>
@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext;
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(nonatomic) unsigned long long presentationStyle;
@property(readonly, nonatomic) MSConversation *activeConversation;
- (void)requestResize;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)dismiss;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)startDragMediaItem:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)stageRichLink:(MSRichLink *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)stageMediaItem:(_MSMessageMediaPayload *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)stageAppItem:(MSMessage *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

