//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

@interface MediaControlsRoutingCornerView : CCUICAPackageView
{
    _Bool _routesAvailable;
    _Bool _routing;
    _Bool _shouldPauseAnimations;
}

@property(nonatomic) _Bool shouldPauseAnimations; // @synthesize shouldPauseAnimations=_shouldPauseAnimations;
@property(nonatomic, getter=isRouting) _Bool routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) _Bool routesAvailable; // @synthesize routesAvailable=_routesAvailable;
- (void)_updateGlyph;
- (id)initWithFrame:(struct CGRect)arg1;

@end

