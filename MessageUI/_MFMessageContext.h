//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFMessageContext-Protocol.h>

@class MFMessagePayload, NSArray, NSString, NSUUID;
@protocol MFMessageContextDelegate;

@interface _MFMessageContext : NSObject <MFMessageContext>
{
    id <MFMessageContextDelegate> _delegate;
    NSUUID *_senderIdentifier;
    NSArray *_recipientIdentifiers;
    MFMessagePayload *_inputMessagePayload;
}

@property(readonly, nonatomic) MFMessagePayload *inputMessagePayload; // @synthesize inputMessagePayload=_inputMessagePayload;
@property(readonly, nonatomic) NSArray *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
@property(readonly, nonatomic) NSUUID *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property(nonatomic) __weak id <MFMessageContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelComposingMessage;
- (void)unstageAllItems;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMessagePayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithInputMessagePayload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

