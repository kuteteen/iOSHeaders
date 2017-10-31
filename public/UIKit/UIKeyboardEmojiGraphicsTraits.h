//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphicsTraits : NSObject
{
    double _emojiKeyWidth;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    double _columnOffset;
    double _sectionOffset;
    double _categoryHeaderHeight;
    double _categoryHeaderLeftPadding;
    double _categorySelectedCirWidth;
    double _scrubViewTopPadding;
    double _categoryHeaderFontSize;
    long long _prepolulatedRecentCount;
    double _inputViewLeftMostPadding;
    double _inputViewRightMostPadding;
    double _rightBiasPercentage;
    double _scrollSnapOffset;
    double _alertTextWidth;
    struct CGSize _fakeEmojiKeySize;
}

+ (id)emojiGraphicsTraitsWithScreenTraits:(id)arg1;
@property(readonly, nonatomic) double alertTextWidth; // @synthesize alertTextWidth=_alertTextWidth;
@property(readonly, nonatomic) double scrollSnapOffset; // @synthesize scrollSnapOffset=_scrollSnapOffset;
@property(readonly, nonatomic) double rightBiasPercentage; // @synthesize rightBiasPercentage=_rightBiasPercentage;
@property(readonly, nonatomic) double inputViewRightMostPadding; // @synthesize inputViewRightMostPadding=_inputViewRightMostPadding;
@property(readonly, nonatomic) double inputViewLeftMostPadding; // @synthesize inputViewLeftMostPadding=_inputViewLeftMostPadding;
@property(readonly, nonatomic) long long prepolulatedRecentCount; // @synthesize prepolulatedRecentCount=_prepolulatedRecentCount;
@property(readonly, nonatomic) double categoryHeaderFontSize; // @synthesize categoryHeaderFontSize=_categoryHeaderFontSize;
@property(readonly, nonatomic) struct CGSize fakeEmojiKeySize; // @synthesize fakeEmojiKeySize=_fakeEmojiKeySize;
@property(readonly, nonatomic) double scrubViewTopPadding; // @synthesize scrubViewTopPadding=_scrubViewTopPadding;
@property(readonly, nonatomic) double categorySelectedCirWidth; // @synthesize categorySelectedCirWidth=_categorySelectedCirWidth;
@property(readonly, nonatomic) double categoryHeaderLeftPadding; // @synthesize categoryHeaderLeftPadding=_categoryHeaderLeftPadding;
@property(readonly, nonatomic) double categoryHeaderHeight; // @synthesize categoryHeaderHeight=_categoryHeaderHeight;
@property(readonly, nonatomic) double sectionOffset; // @synthesize sectionOffset=_sectionOffset;
@property(readonly, nonatomic) double columnOffset; // @synthesize columnOffset=_columnOffset;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(readonly, nonatomic) double emojiKeyWidth; // @synthesize emojiKeyWidth=_emojiKeyWidth;
- (id)initWithScreenTrait:(id)arg1;

@end

