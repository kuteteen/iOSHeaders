//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface ABBannerView : UITableViewCell
{
    NSString *_title;
    NSString *_value;
}

+ (float)defaultHeight;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)cellWasDoubleTapped:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;
- (void)showMenu;
- (void)menuDidHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_updateLabel;
- (void)setTitle:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

