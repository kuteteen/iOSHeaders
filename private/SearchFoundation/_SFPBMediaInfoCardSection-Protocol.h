//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaDetail, _SFPBMediaItem, _SFPBMediaOffer, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBMediaInfoCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasSpecialOfferButtonLabel;
@property(retain, nonatomic) _SFPBRichText *specialOfferButtonLabel;
@property(readonly, nonatomic) _Bool hasIsMediaContainer;
@property(nonatomic) _Bool isMediaContainer;
@property(readonly, nonatomic) _Bool hasWatchListConfirmationText;
@property(copy, nonatomic) NSString *watchListConfirmationText;
@property(readonly, nonatomic) _Bool hasWatchListContinuationText;
@property(copy, nonatomic) NSString *watchListContinuationText;
@property(readonly, nonatomic) _Bool hasWatchListButtonLabel;
@property(copy, nonatomic) NSString *watchListButtonLabel;
@property(readonly, nonatomic) _Bool hasWatchListIdentifier;
@property(copy, nonatomic) NSString *watchListIdentifier;
@property(copy, nonatomic) NSArray *offers;
@property(readonly, nonatomic) _Bool hasPlayAction;
@property(retain, nonatomic) _SFPBActionItem *playAction;
@property(copy, nonatomic) NSArray *details;
@property(readonly, nonatomic) _Bool hasMediaItem;
@property(retain, nonatomic) _SFPBMediaItem *mediaItem;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(nonatomic) _Bool canBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (void)addOffers:(_SFPBMediaOffer *)arg1;
- (void)clearOffers;
- (_SFPBMediaDetail *)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (void)addDetails:(_SFPBMediaDetail *)arg1;
- (void)clearDetails;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

