//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SFSearchResult;

@interface FCArticleSearchResult : NSObject
{
    NSString *_articleID;
    id <FCHeadlineProviding> _deflatedHeadline;
    id <FCHeadlineProviding> _inflatedHeadline;
    SFSearchResult *_searchResult;
}

@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) id <FCHeadlineProviding> inflatedHeadline; // @synthesize inflatedHeadline=_inflatedHeadline;
@property(readonly, nonatomic) id <FCHeadlineProviding> deflatedHeadline; // @synthesize deflatedHeadline=_deflatedHeadline;
@property(readonly, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2;

@end

