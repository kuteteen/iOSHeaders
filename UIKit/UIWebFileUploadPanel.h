//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIDocumentMenuDelegate-Protocol.h>
#import <UIKit/UIDocumentPickerDelegate-Protocol.h>
#import <UIKit/UIImagePickerControllerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UIPopoverControllerDelegate-Protocol.h>

@class DOMNode, NSArray, NSObject, NSString, UIDocumentMenuViewController, UIImagePickerController, UIPopoverController, UIWebDocumentView;
@protocol UIWebFileUploadPanelDelegate, WebOpenPanelResultListener;

__attribute__((visibility("hidden")))
@interface UIWebFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate>
{
    UIDocumentMenuViewController *_documentMenuController;
    UIImagePickerController *_imagePicker;
    UIViewController *_presentationViewController;
    UIPopoverController *_presentationPopover;
    struct CGPoint _interactionPoint;
    DOMNode *_interactionElement;
    _Bool _allowMultipleFiles;
    _Bool _isUsingCamera;
    NSArray *_mimeTypes;
    UIWebDocumentView *_documentView;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    id <UIWebFileUploadPanelDelegate> _delegate;
    long long _mediaCaptureType;
}

@property(nonatomic) long long mediaCaptureType; // @synthesize mediaCaptureType=_mediaCaptureType;
@property(nonatomic) id <UIWebFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUsingCamera; // @synthesize isUsingCamera=_isUsingCamera;
@property(nonatomic) _Bool allowMultipleFiles; // @synthesize allowMultipleFiles=_allowMultipleFiles;
@property(retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener; // @synthesize resultListener=_resultListener;
@property(nonatomic) UIWebDocumentView *documentView; // @synthesize documentView=_documentView;
@property(copy, nonatomic) NSArray *mimeTypes; // @synthesize mimeTypes=_mimeTypes;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)_willMultipleSelectionDelegateBeCalled;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImage:(id)arg1 withAssetURL:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_dismissDisplayAnimated:(_Bool)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)dismiss;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)present;
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;
- (void)_showDocumentPickerMenu;
- (id)_cameraButtonLabel;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (id)_photoPickerWithSourceType:(long long)arg1;
- (id)_documentPickerMenuMediaTypes;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_UTIsForMIMETypes;
- (_Bool)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (_Bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_adjustMediaCaptureType;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_cancel;
- (void)_dispatchDidDismiss;
- (void)dealloc;
- (id)initWithResultListener:(id)arg1 configuration:(id)arg2 documentView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

