//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, SFActivityIndicatorCardSection, SFAppLinkCardSection, SFAudioPlaybackCardSection, SFDescriptionCardSection, SFDetailedRowCardSection, SFFlightCardSection, SFImagesCardSection, SFKeyValueDataCardSection, SFMapCardSection, SFMediaInfoCardSection, SFMediaPlayerCardSection, SFMessageCardSection, SFMetaInfoCardSection, SFNowPlayingCardSection, SFRichTitleCardSection, SFRowCardSection, SFScoreboardCardSection, SFSectionHeaderCardSection, SFSelectableGridCardSection, SFSocialMediaPostCardSection, SFStockChartCardSection, SFSuggestionCardSection, SFTableHeaderRowCardSection, SFTableRowCardSection, SFTextColumnsCardSection, SFTitleCardSection, SFTrackListCardSection, SFWatchListCardSection, SFWebCardSection;

@protocol SFCardSectionValue <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFWatchListCardSection *watchListCardSection;
@property(retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection;
@property(retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection;
@property(retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection;
@property(retain, nonatomic) SFSuggestionCardSection *suggestionCardSection;
@property(retain, nonatomic) SFImagesCardSection *imagesCardSection;
@property(retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection;
@property(retain, nonatomic) SFMessageCardSection *messageCardSection;
@property(retain, nonatomic) SFWebCardSection *webCardSection;
@property(retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection;
@property(retain, nonatomic) SFFlightCardSection *flightCardSection;
@property(retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection;
@property(retain, nonatomic) SFTrackListCardSection *trackListCardSection;
@property(retain, nonatomic) SFTitleCardSection *titleCardSection;
@property(retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection;
@property(retain, nonatomic) SFTableRowCardSection *tableRowCardSection;
@property(retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection;
@property(retain, nonatomic) SFStockChartCardSection *stockChartCardSection;
@property(retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection;
@property(retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection;
@property(retain, nonatomic) SFRowCardSection *rowCardSection;
@property(retain, nonatomic) SFRichTitleCardSection *richTitleCardSection;
@property(retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection;
@property(retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection;
@property(retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection;
@property(retain, nonatomic) SFMapCardSection *mapCardSection;
@property(retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection;
@property(retain, nonatomic) SFDescriptionCardSection *descriptionCardSection;
@property(retain, nonatomic) SFAppLinkCardSection *appLinkCardSection;
@end

