//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBRichTitleCardSection.h"

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBImage;

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isCentered:1;
        unsigned int rating:1;
        unsigned int reviewNewLine:1;
        unsigned int auxiliaryBottomTextColor:1;
        unsigned int auxiliaryAlignment:1;
        unsigned int hideVerticalDivider:1;
        unsigned int titleAlign:1;
        unsigned int titleWeight:1;
        unsigned int titleNoWrap:1;
        unsigned int thumbnailCropCircle:1;
        unsigned int playActionAlign:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isCentered;
    _Bool _reviewNewLine;
    _Bool _hideVerticalDivider;
    _Bool _titleNoWrap;
    _Bool _thumbnailCropCircle;
    int _separatorStyle;
    float _rating;
    int _auxiliaryBottomTextColor;
    int _auxiliaryAlignment;
    int _titleAlign;
    int _titleWeight;
    int _playActionAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentAdvisory;
    _SFPBImage *_titleImage;
    NSString *_descriptionText;
    NSString *_ratingText;
    _SFPBImage *_reviewGlyph;
    NSString *_reviewText;
    NSArray *_moreGlyphs;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    _SFPBImage *_imageOverlay;
    _SFPBActionItem *_playAction;
    NSArray *_offers;
    NSString *_footnote;
}

@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(nonatomic) int playActionAlign; // @synthesize playActionAlign=_playActionAlign;
@property(retain, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property(retain, nonatomic) _SFPBImage *imageOverlay; // @synthesize imageOverlay=_imageOverlay;
@property(nonatomic) _Bool thumbnailCropCircle; // @synthesize thumbnailCropCircle=_thumbnailCropCircle;
@property(nonatomic) _Bool titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property(nonatomic) int titleWeight; // @synthesize titleWeight=_titleWeight;
@property(nonatomic) int titleAlign; // @synthesize titleAlign=_titleAlign;
@property(nonatomic) _Bool hideVerticalDivider; // @synthesize hideVerticalDivider=_hideVerticalDivider;
@property(nonatomic) int auxiliaryAlignment; // @synthesize auxiliaryAlignment=_auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property(nonatomic) _Bool reviewNewLine; // @synthesize reviewNewLine=_reviewNewLine;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) _SFPBImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool isCentered; // @synthesize isCentered=_isCentered;
@property(retain, nonatomic) _SFPBImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasFootnote;
- (id)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (void)addOffers:(id)arg1;
- (void)clearOffers;
@property(readonly, nonatomic) _Bool hasPlayActionAlign;
@property(readonly, nonatomic) _Bool hasPlayAction;
@property(readonly, nonatomic) _Bool hasImageOverlay;
@property(readonly, nonatomic) _Bool hasThumbnailCropCircle;
@property(readonly, nonatomic) _Bool hasTitleNoWrap;
@property(readonly, nonatomic) _Bool hasTitleWeight;
@property(readonly, nonatomic) _Bool hasTitleAlign;
@property(readonly, nonatomic) _Bool hasHideVerticalDivider;
@property(readonly, nonatomic) _Bool hasAuxiliaryAlignment;
@property(readonly, nonatomic) _Bool hasAuxiliaryBottomTextColor;
@property(readonly, nonatomic) _Bool hasAuxiliaryBottomText;
@property(readonly, nonatomic) _Bool hasAuxiliaryMiddleText;
@property(readonly, nonatomic) _Bool hasAuxiliaryTopText;
- (id)moreGlyphsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreGlyphsCount;
- (void)addMoreGlyphs:(id)arg1;
- (void)clearMoreGlyphs;
@property(readonly, nonatomic) _Bool hasReviewNewLine;
@property(readonly, nonatomic) _Bool hasReviewText;
@property(readonly, nonatomic) _Bool hasReviewGlyph;
@property(readonly, nonatomic) _Bool hasRatingText;
@property(readonly, nonatomic) _Bool hasRating;
@property(readonly, nonatomic) _Bool hasDescriptionText;
@property(readonly, nonatomic) _Bool hasIsCentered;
@property(readonly, nonatomic) _Bool hasTitleImage;
@property(readonly, nonatomic) _Bool hasContentAdvisory;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

