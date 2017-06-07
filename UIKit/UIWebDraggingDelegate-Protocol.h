//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIDragItem, UIDropInteraction, UIDropProposal, UITargetedDragPreview, UIWebDocumentView;
@protocol UIDragAnimating, UIDropSession;

@protocol UIWebDraggingDelegate <NSObject>

@optional
- (_Bool)_webView:(UIWebDocumentView *)arg1 allowsSelectingContentAfterDropForSession:(id <UIDropSession>)arg2;
- (void)_webView:(UIWebDocumentView *)arg1 dropInteraction:(UIDropInteraction *)arg2 concludeDrop:(id <UIDropSession>)arg3;
- (void)_webView:(UIWebDocumentView *)arg1 dropInteraction:(UIDropInteraction *)arg2 item:(UIDragItem *)arg3 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg4;
- (UIDropProposal *)_webView:(UIWebDocumentView *)arg1 willUpdateDropProposalToProposal:(UIDropProposal *)arg2 forSession:(id)arg3;
- (void)_webView:(UIWebDocumentView *)arg1 dropWasHandled:(_Bool)arg2 forSession:(id)arg3 itemProviders:(NSArray *)arg4;
- (UITargetedDragPreview *)_webView:(UIWebDocumentView *)arg1 previewForDroppingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (_Bool)_webView:(UIWebDocumentView *)arg1 performDropWithSession:(id <UIDropSession>)arg2;
- (_Bool)_webView:(UIWebDocumentView *)arg1 performDropWithItemProviders:(NSArray *)arg2;
- (NSArray *)_webView:(UIWebDocumentView *)arg1 adjustedItemProviders:(NSArray *)arg2;
@end

