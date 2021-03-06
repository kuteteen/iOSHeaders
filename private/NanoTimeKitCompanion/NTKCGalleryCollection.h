//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKEnumeratableFaceCollection.h"

@class NSString;

@interface NTKCGalleryCollection : NSObject <NTKEnumeratableFaceCollection>
{
    NSString *_title;
    CDUnknownBlockType _calloutName;
    NSString *_descriptionText;
    id <NTKCGalleryCollectionDelegate> _delegate;
}

+ (id)_galleryCollectionWithCollectionIdentifier:(id)arg1 title:(id)arg2 calloutName:(CDUnknownBlockType)arg3;
+ (id)_photoFaces;
+ (id)_kaleidoscopeFaces;
+ (id)_upNextFaces;
+ (id)_extraLargeFaces;
+ (id)_chronographFaces;
+ (id)_timelapseFaces;
+ (id)_solarFaces;
+ (id)_colorFaces;
+ (id)_astronomyFaces;
+ (id)_motionFaces;
+ (id)_simpleFaces;
+ (id)_modularFaces;
+ (id)_utilityFaces;
+ (id)_numeralsFaces;
+ (id)_activityFaces;
+ (id)_explorerFaces;
+ (id)_zeusFaces;
+ (id)_victoryDigitalFaces;
+ (id)_victoryAnalogFaces;
+ (id)_newFaces;
+ (id)galleryCollections;
@property(nonatomic) __weak id <NTKCGalleryCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) CDUnknownBlockType calloutName; // @synthesize calloutName=_calloutName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)enumerateFaceNamesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;
- (id)newFace;
@property(readonly, nonatomic) _Bool canAddNewFaces;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

