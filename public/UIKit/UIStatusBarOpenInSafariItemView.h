//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarSystemNavigationItemView.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView
{
    UISystemNavigationAction *_systemNavigationAction;
    NSString *_destinationText;
}

@property(retain, nonatomic) NSString *destinationText; // @synthesize destinationText=_destinationText;
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // @synthesize systemNavigationAction=_systemNavigationAction;
- (void).cxx_destruct;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (id)_nominalTitleWithDestinationText:(id)arg1;
- (void)userDidActivateButton:(id)arg1;
- (_Bool)layoutImageOnTrailingEdge;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)_displayStringFromURL:(id)arg1;

@end

