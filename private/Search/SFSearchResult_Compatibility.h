//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Search/SFSearchResult_SpotlightExtras.h>

#import "NSCopying.h"

@class NSArray, NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras <NSCopying>
{
    _Bool _hasSearchResultDomain;
    _Bool _thumbnail_align_right;
    int _searchResultDomain;
    unsigned long long _resultScore;
    NSString *_sourceDomain;
    NSString *_subtitle;
    NSString *_templateName;
    NSArray *_contactIdentifiers;
    NSString *_section_header;
    NSString *_secondary_title;
}

@property(nonatomic) _Bool thumbnail_align_right; // @synthesize thumbnail_align_right=_thumbnail_align_right;
@property(readonly, nonatomic) NSString *secondary_title; // @synthesize secondary_title=_secondary_title;
@property(retain, nonatomic) NSString *section_header; // @synthesize section_header=_section_header;
@property(retain, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property int searchResultDomain; // @synthesize searchResultDomain=_searchResultDomain;
@property(readonly) _Bool hasSearchResultDomain; // @synthesize hasSearchResultDomain=_hasSearchResultDomain;
@property(retain, nonatomic) NSString *sourceDomain; // @synthesize sourceDomain=_sourceDomain;
@property(nonatomic) unsigned long long resultScore; // @synthesize resultScore=_resultScore;
- (void).cxx_destruct;
- (void)writeTo:(id)arg1;
- (_Bool)isQuickGlance;
@property(retain, nonatomic) NSString *adam_id;
@property(retain, nonatomic) NSString *bundleID;
- (id)uniqueIdentifier;
- (void)setUniqueIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *externalIdentifier;
@property(retain, nonatomic) NSString *resultIdentifier;
- (id)simpleTitle;
- (void)setSimpleTitle:(id)arg1;
@property(retain, nonatomic) NSString *compatibilityTitle;
@property int title_maxlines;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)debugDescription;

@end

