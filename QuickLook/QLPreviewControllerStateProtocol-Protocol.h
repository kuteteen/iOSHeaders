//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSData, NSURL;
@protocol QLPrintingProtocol;

@protocol QLPreviewControllerStateProtocol <NSObject>
- (void)updatePreferredContentSize:(struct CGSize)arg1;
- (void)updatePreviewItemAtIndex:(unsigned long long)arg1 updatedContentsURL:(NSURL *)arg2 sandboxExtension:(NSData *)arg3;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)expandContentOfCurrentItem;
- (void)beginInteractiveTransition;
- (void)setCanChangeCurrentPage:(_Bool)arg1;
- (void)openURLIfAllowed:(NSURL *)arg1;
- (void)setPrinter:(id <QLPrintingProtocol>)arg1;
- (void)setAccessoryViewVisible:(_Bool)arg1;
- (void)updateKeyCommands;
- (void)updateOverlayButtons:(_Bool)arg1;
- (void)setToolbarCanBeVisible:(_Bool)arg1;
- (void)setRotationEnabled:(_Bool)arg1;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (void)setFullScreen:(_Bool)arg1;
@end

