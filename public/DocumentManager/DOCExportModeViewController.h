//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DocumentManager/UIDocumentBrowserViewController.h>

#import "DOCTargetSelectionBrowserViewControllerDelegate.h"

@class DOCTargetSelectionBrowserViewController;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate>
{
    DOCTargetSelectionBrowserViewController *_moveVC;
}

@property(retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC; // @synthesize moveVC=_moveVC;
- (void).cxx_destruct;
- (void)targetSelectionController:(id)arg1 didExportToURLs:(id)arg2;
- (void)targetSelectionControllerWasCancelled:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

