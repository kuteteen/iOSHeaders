//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTKCFaceDetailOtherSectionController, NTKComplication, NTKDigitalTimeAccuracyOption;

@protocol NTKCFaceDetailOtherSectionDelegate <NSObject>
- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didChangeShowSeconds:(NTKDigitalTimeAccuracyOption *)arg2 forMode:(long long)arg3;
- (void)otherSectionDidSelectMonogramEdit:(NTKCFaceDetailOtherSectionController *)arg1;
- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didToggleMonogram:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
@end

