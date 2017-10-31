//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCColor, NSArray, NSDictionary, NSString;

@interface FCGroupConfig : NSObject
{
    FCColor *_groupTitleColor;
    NSArray *_groupFonts;
    unsigned long long _cutoffTimeSecs;
    unsigned long long _cutoffCount;
    NSDictionary *_articleMetadataByArticleID;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSDictionary *articleMetadataByArticleID; // @synthesize articleMetadataByArticleID=_articleMetadataByArticleID;
@property(nonatomic) unsigned long long cutoffCount; // @synthesize cutoffCount=_cutoffCount;
@property(nonatomic) unsigned long long cutoffTimeSecs; // @synthesize cutoffTimeSecs=_cutoffTimeSecs;
@property(retain, nonatomic) NSArray *groupFonts; // @synthesize groupFonts=_groupFonts;
@property(retain, nonatomic) FCColor *groupTitleColor; // @synthesize groupTitleColor=_groupTitleColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *feedID;
@property(readonly, nonatomic) NSString *channelID;
@property(readonly, nonatomic) NSString *sectionID;
@property(readonly, nonatomic) NSString *groupActionUrlString;
@property(readonly, nonatomic) NSString *groupActionTitle;
@property(readonly, nonatomic) double groupTitleFontTrackingiPad;
@property(readonly, nonatomic) double groupTitleFontTracking;
@property(readonly, nonatomic) double groupTitleFontSizeiPad;
@property(readonly, nonatomic) double groupTitleFontSize;
@property(readonly, nonatomic) NSString *groupTitleFontName;
@property(readonly, nonatomic) NSString *groupName;
@property(readonly, nonatomic) NSString *articleListID;
- (id)initWithDictionary:(id)arg1;

@end

