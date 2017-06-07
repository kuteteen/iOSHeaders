//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoOwnerCommentCell : UITableViewCell
{
    _Bool _usesCompactSeparators;
    NSAttributedString *_ownerString;
    UILabel *_ownerContentLabel;
    UIView *_styledSeparatorView;
}

+ (double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
+ (id)_ownerStringForAsset:(id)arg1;
@property(readonly, retain, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(readonly, retain, nonatomic) UILabel *ownerContentLabel; // @synthesize ownerContentLabel=_ownerContentLabel;
@property(copy, nonatomic) NSAttributedString *ownerString; // @synthesize ownerString=_ownerString;
@property(nonatomic) _Bool usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContentFromAsset:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

