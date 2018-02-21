//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXVideoAccessoryItem.h"

@class NSString, SXAdvanceButton, SXNowPlayingButton, UIView;

@interface SXDiscoverMoreViewController : UIViewController <SXVideoAccessoryItem>
{
    unsigned long long _displayMode;
    SXNowPlayingButton *_discoverMoreButton;
    SXAdvanceButton *_advanceButton;
    id <SXDiscoverMoreConfigurationProviding> _configurationProvider;
}

@property(readonly, nonatomic) id <SXDiscoverMoreConfigurationProviding> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) SXAdvanceButton *advanceButton; // @synthesize advanceButton=_advanceButton;
@property(readonly, nonatomic) SXNowPlayingButton *discoverMoreButton; // @synthesize discoverMoreButton=_discoverMoreButton;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithDiscoverMoreButton:(id)arg1 advanceButton:(id)arg2 configurationProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

