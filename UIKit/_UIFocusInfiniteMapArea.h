//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusMapArea-Protocol.h>

@class NSString;

@interface _UIFocusInfiniteMapArea : NSObject <_UIFocusMapArea>
{
}

+ (id)sharedInstance;
- (id)intersectionWithRegion:(id)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (_Bool)intersectsRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect frame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

