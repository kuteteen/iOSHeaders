//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UILabel;

@interface EKUISendInvitationsCell : UITableViewCell
{
    UILabel *_simpleTextLabel;
    NSArray *_persistentConstraints;
    NSLayoutConstraint *_leftInsetConstraint;
    NSString *_simpleText;
}

+ (id)_simpleTextLabelFont;
@property(retain, nonatomic) NSString *simpleText; // @synthesize simpleText=_simpleText;
@property(retain, nonatomic) NSLayoutConstraint *leftInsetConstraint; // @synthesize leftInsetConstraint=_leftInsetConstraint;
@property(retain, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property(retain, nonatomic) UILabel *simpleTextLabel; // @synthesize simpleTextLabel=_simpleTextLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

