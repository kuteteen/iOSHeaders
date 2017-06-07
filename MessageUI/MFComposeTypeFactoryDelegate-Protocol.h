//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFFuture, MFMailAccountProxy, MFMailAccountProxyGenerator, MFMutableMessageHeaders, NSArray, NSString, UIView;
@protocol MFComposeBodyField;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (MFFuture *)shouldCreateRichTextRepresentation;
- (NSArray *)attachments;
- (_Bool)hasAnyHiddenTrailingEmptyQuote;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1 addIfNotPresent:(_Bool)arg2;
- (MFMutableMessageHeaders *)savedHeaders;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (NSString *)subject;
- (void)setSubject:(NSString *)arg1;
- (NSArray *)bccRecipients;
- (void)setBccRecipients:(NSArray *)arg1;
- (NSArray *)ccRecipients;
- (void)setCcRecipients:(NSArray *)arg1;
- (NSArray *)toRecipients;
- (void)setToRecipients:(NSArray *)arg1;
- (UIView<MFComposeBodyField> *)bodyField;
- (MFMailAccountProxyGenerator *)accountProxyGenerator;

@optional
- (void)addSignature:(_Bool)arg1;
@end

