//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManager/UIDocumentBrowserViewController.h>

#import <DocumentManager/DOCTargetSelectionBrowserViewControllerDelegate-Protocol.h>

@class DOCTargetSelectionBrowserViewController;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate>
{
    DOCTargetSelectionBrowserViewController *_moveVC;
}

@property(retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC; // @synthesize moveVC=_moveVC;
- (void).cxx_destruct;
- (void)targetSelectionControllerWasCancelled:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

