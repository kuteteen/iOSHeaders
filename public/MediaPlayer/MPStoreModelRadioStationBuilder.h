//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelRadioStationBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int beats1:1;
        unsigned int name:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int explicit:1;
        unsigned int type:1;
        unsigned int artwork:1;
    } _requestedRadioStationProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end

