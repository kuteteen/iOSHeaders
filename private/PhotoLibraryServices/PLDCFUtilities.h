//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLDCFUtilities : NSObject
{
}

+ (id)placeValuesFromBases:(id)arg1;
+ (id)convertHash:(unsigned int)arg1 usingPlaceValues:(id)arg2;
+ (id)encodeFileNameFromHash:(unsigned int)arg1;
+ (void)computeSHA256OfString:(id)arg1 intoBuffer:(char *)arg2;
+ (unsigned int)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)insertRenderMarkerToFileName:(id)arg1;
+ (id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (_Bool)fileName:(id)arg1 matchesRegex:(id)arg2;
+ (id)fileNameByRemovingRenderMarkerInFileName:(id)arg1;
+ (_Bool)isRenderFileName:(id)arg1;
+ (id)renderDCFRegex;
+ (id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 isOriginal:(_Bool)arg4;
+ (_Bool)isValidDCFFileName:(id)arg1;
+ (id)dcfRegex;

@end

