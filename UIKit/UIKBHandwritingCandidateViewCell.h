//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TIKeyboardCandidate, UIKBThemedView, UIKeyboardCandidatePocketShadow, UILabel;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell
{
    TIKeyboardCandidate *_candidate;
    CDStruct_961fb75c _visualStyling;
    long long _leftBorderEdge;
    long long _rightBorderEdge;
    UILabel *_label;
    UILabel *_secondaryLabel;
    UIKBThemedView *_themedView;
    UIKeyboardCandidatePocketShadow *_leftHardBorder;
    UIKeyboardCandidatePocketShadow *_rightHardBorder;
}

+ (double)widthForCandidate:(id)arg1 visualStyling:(CDStruct_961fb75c)arg2;
+ (id)secondaryLabelFont;
+ (id)labelFontForText:(id)arg1;
+ (double)systemFontSize;
+ (_Bool)needsThemedView;
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *rightHardBorder; // @synthesize rightHardBorder=_rightHardBorder;
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *leftHardBorder; // @synthesize leftHardBorder=_leftHardBorder;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long rightBorderEdge; // @synthesize rightBorderEdge=_rightBorderEdge;
@property(nonatomic) long long leftBorderEdge; // @synthesize leftBorderEdge=_leftBorderEdge;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(copy, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (_Bool)_canDrawContent;
- (void)_updateBorders;
- (void)reloadData;
- (void)updateLabels;
- (id)textLabelColor;
- (void)updateThemedView;
- (void)_setRenderConfig:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

