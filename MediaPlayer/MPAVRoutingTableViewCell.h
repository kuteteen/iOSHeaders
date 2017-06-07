//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MPAVRoute, UIActivityIndicatorView, UIImageView, UILabel, UISwitch, UIView;
@protocol MPAVRoutingTableViewCellDelegate;

@interface MPAVRoutingTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_routeNameLabel;
    UILabel *_subtitleTextLabel;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_smartAudioImageView;
    UILabel *_mirroringLabel;
    UISwitch *_mirroringSwitch;
    UIView *_mirroringSeparatorView;
    _Bool _mirroringSwitchVisible;
    _Bool _debugCell;
    _Bool _pendingSelection;
    id <MPAVRoutingTableViewCellDelegate> _delegate;
    MPAVRoute *_route;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
}

@property(nonatomic, getter=isPendingSelection) _Bool pendingSelection; // @synthesize pendingSelection=_pendingSelection;
@property(nonatomic, getter=isDebugCell) _Bool debugCell; // @synthesize debugCell=_debugCell;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property(nonatomic) _Bool mirroringSwitchVisible; // @synthesize mirroringSwitchVisible=_mirroringSwitchVisible;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak id <MPAVRoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSpinnerStyle;
- (id)_iconImageForRoute:(id)arg1;
- (id)_detailTextForRoute:(id)arg1;
- (_Bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;
- (_Bool)_shouldShowMirroringAsEnabledForRoute:(id)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (void)_configureDetailLabel:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (id)_currentDeviceRoutingIconImageName;
- (id)_routingImageStyleName;
- (void)setMirroringSwitchVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAccessoryType:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

