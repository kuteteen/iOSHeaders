//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/UIDropInteractionDelegate-Protocol.h>

@class UIDropInteraction, UIDropProposal;
@protocol UIDropSession;

@protocol _MFAPIStagingDropInteractionDelegate <UIDropInteractionDelegate>

@optional
- (UIDropProposal *)_api_dropInteraction:(UIDropInteraction *)arg1 sessionDidUpdate:(id <UIDropSession>)arg2;
- (void)_api_dropInteraction:(UIDropInteraction *)arg1 sessionDidEnter:(id <UIDropSession>)arg2;
@end
