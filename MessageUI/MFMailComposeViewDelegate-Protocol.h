//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFMailMarkupDelegate-Protocol.h>
#import <MessageUI/UIDocumentPickerDelegate-Protocol.h>
#import <MessageUI/UIPickerViewDelegate-Protocol.h>
#import <MessageUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <MessageUI/UITableViewDataSource-Protocol.h>
#import <MessageUI/UITableViewDelegate-Protocol.h>

@class MFAttachment, MFFromAddressTableView, MFMailAccountProxy, MFMailPopoverManager, NSArray, NSString, UIPickerView, UIViewController, _MFMailCompositionContext;

@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UITableViewDelegate, UITableViewDataSource, UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate, MFMailMarkupDelegate>
- (void)markupAttachment:(MFAttachment *)arg1;
- (UIViewController *)presentationViewController;
- (void)changeQuoteLevel:(long long)arg1;
- (void)didInsertBodyText:(NSString *)arg1;
- (void)didInsertAttachment:(MFAttachment *)arg1;
- (_MFMailCompositionContext *)compositionContext;
- (MFMailPopoverManager *)popoverManager;
- (void)importDocument;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)insertPhotoOrVideo;
- (int)compositionType;
- (NSString *)currentScaleImageSize;
- (_Bool)hasAttachments;
- (_Bool)bccAddressesDirtied;
- (_Bool)sendingEmailDirtied;
- (_Bool)canShowAttachmentPicker;
- (_Bool)canShowImageSizeField;
- (_Bool)canShowFromField;
- (MFMailAccountProxy *)sendingAccountProxy;
- (void)updateSignature;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (NSString *)sendingEmailAddress;
- (NSString *)sendingEmailAddressIfExists;
- (NSArray *)emailAddresses;
- (void)scrollToSelectedEntryInFromAddressTableView:(MFFromAddressTableView *)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(UIPickerView *)arg1;

@optional
- (void)composeBodyFieldDidFinishLoad;
@end

