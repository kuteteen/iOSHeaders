//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat *mCustomFormat;
}

- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;
- (const CDStruct_8acff13f *)defaultFormatData;
- (int)formatType;
- (id)formatName;
- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;

@end
