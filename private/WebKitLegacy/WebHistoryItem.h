//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

+ (id)entryWithURL:(id)arg1;
+ (void)initialize;
- (void)_visitedWithTitle:(id)arg1;
- (struct CGPoint)scrollPoint;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)setViewState:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithWebCoreHistoryItem:(Ref_0785b76d *)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(copy, nonatomic) NSString *alternateTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *originalURLString;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)init;
- (_Bool)_hasCachedPageExpired;
- (_Bool)_isInPageCache;
- (void)_setScrollPoint:(struct CGPoint)arg1;
- (struct CGPoint)_scrollPoint;
- (void)_setViewportArguments:(id)arg1;
- (id)_viewportArguments;
- (_Bool)_scaleIsInitial;
- (float)_scale;
- (void)_setScale:(float)arg1 isInitial:(_Bool)arg2;
- (id)_redirectURLs;
- (_Bool)lastVisitWasFailure;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (id)_transientPropertyForKey:(id)arg1;
- (id)URL;
- (id)children;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (_Bool)isTargetItem;
- (id)target;
- (id)dictionaryRepresentationIncludingChildren:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)initWithURL:(id)arg1 title:(id)arg2;

@end

