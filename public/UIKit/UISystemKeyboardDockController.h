//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIKeyboardDockViewDelegate.h"

@class NSString, UIKeyboardDockItem, UIKeyboardDockView;

__attribute__((visibility("hidden")))
@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate>
{
    _Bool _dictationHasUsedServerManualEndpointing;
    _Bool _dictationUsingServerManualEndpointing;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIKeyboardDockView *_dockView;
}

@property(retain, nonatomic) UIKeyboardDockView *dockView; // @synthesize dockView=_dockView;
- (void).cxx_destruct;
- (void)updateDockItemsVisibility;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)setKeyboardDockItem;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

