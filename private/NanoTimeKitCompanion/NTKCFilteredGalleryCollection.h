//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceCollectionGalleryCollection.h>

@interface NTKCFilteredGalleryCollection : NTKCFaceCollectionGalleryCollection
{
    CDUnknownBlockType _filter;
}

@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;

@end

