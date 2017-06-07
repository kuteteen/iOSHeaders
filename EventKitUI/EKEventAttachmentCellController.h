//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class EKAttachment, EKEventAttachmentCell, NSString;
@protocol EKEventAttachmentCellControllerDelegate;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate>
{
    id _downloadID;
    EKEventAttachmentCell *_cell;
    _Bool _sourceIsManaged;
    EKAttachment *_attachment;
    id <EKEventAttachmentCellControllerDelegate> _delegate;
}

+ (id)_attachmentDownloadErrorLocalizedString;
+ (id)_cannotOpenAttachmentLocalizedString;
+ (id)_okLocalizedString;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;
+ (_Bool)_attachmentIsViewable:(id)arg1;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(nonatomic) __weak id <EKEventAttachmentCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly) EKEventAttachmentCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)cellSelected;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)tearDown;
- (void)_clearDownloadID;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

