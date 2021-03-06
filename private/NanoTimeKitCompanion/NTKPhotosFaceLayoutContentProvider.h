//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceLayoutContentProvider.h>

@class NTKUtilityComplicationFactory;

@interface NTKPhotosFaceLayoutContentProvider : NTKFaceLayoutContentProvider
{
    NTKUtilityComplicationFactory *_complicationFactory;
}

- (void).cxx_destruct;
- (long long)_photosUtilitySlotForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)init;

@end

