//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    _Bool _hasObservedValues;
    _UIBackdropViewSettings *_parentSettings;
}

@property(nonatomic) _Bool hasObservedValues; // @synthesize hasObservedValues=_hasObservedValues;
@property(nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property(readonly, nonatomic) UIColor *color;
- (_Bool)applyCABackdropLayerStatistics:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
@property(nonatomic) double contrast;
@property(nonatomic) double averageBrightness;
@property(nonatomic) double averageSaturation;
@property(nonatomic) double averageHue;
- (void)setDefaultValues;

@end

