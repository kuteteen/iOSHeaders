//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSUUID;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController
{
    _Bool _readyToDisplay;
    NSUUID *_requestUUID;
}

@property(nonatomic, getter=isReadyToDisplay) _Bool readyToDisplay; // @synthesize readyToDisplay=_readyToDisplay;
@property(retain, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (_Bool)__shouldRemoteViewControllerFenceOperations;

@end

