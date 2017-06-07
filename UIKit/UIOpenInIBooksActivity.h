//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/LSOpenResourceOperationDelegate-Protocol.h>

@class LSApplicationProxy, NSOperation, NSString, NSURL;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate>
{
    _Bool _sourceIsManaged;
    _Bool _shouldUnlinkFile;
    NSURL *_url;
    NSString *_applicationIdentifier;
    LSApplicationProxy *_applicationProxy;
    NSOperation *_operation;
}

+ (id)bestJobNameForActivityItems:(id)arg1;
+ (id)jobNameFormatForFile;
+ (id)defaultJobName;
+ (long long)activityCategory;
@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool shouldUnlinkFile; // @synthesize shouldUnlinkFile=_shouldUnlinkFile;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_cleanup;
- (void)performActivity;
- (void)_finishedCopyingResource;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_openDocumentWithApplication;
- (id)printInteractionController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

