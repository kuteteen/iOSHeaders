//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/_MSStickerSendManagerDelegate-Protocol.h>

@class NSString;
@protocol _MSStickerSendManagerDelegate;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate>
{
    id <_MSStickerSendManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <_MSStickerSendManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

