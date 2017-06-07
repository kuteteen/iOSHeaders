//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper : CMMapper
{
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
    WMParagraphStyle *mStyle;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapParagraphProperties;
- (void)mapParagraphStyle;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;
- (void)mapListStyleFromParagraphStyleWithState:(id)arg1;
- (_Bool)getListLevel:(char *)arg1 andListIndex:(int *)arg2 fromStyleOnly:(_Bool)arg3;
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromStyle:(id)arg5;
- (void)getListLevel:(char *)arg1 andListIndex:(int *)arg2 foundListLevel:(_Bool *)arg3 foundListIndex:(_Bool *)arg4 fromParagraphProperties:(id)arg5;
- (void)mapBulletFromListId:(int)arg1 listLevel:(unsigned char)arg2 at:(id)arg3 document:(id)arg4 state:(id)arg5;
- (void)mapStyleFromListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;
- (void)updateOutlineStateWithListId:(int)arg1 listLevel:(unsigned char)arg2 document:(id)arg3 state:(id)arg4;
- (void)destyleEmptyParagraph;
- (_Bool)isListItem;
- (void)dealloc;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(_Bool)arg3;
- (void)mapBulletAt:(id)arg1 forIndex:(int)arg2 inLevelDescription:(id)arg3 listState:(id)arg4;
- (id)bulletLabelForIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3;
- (id)labelStringWithGap:(id)arg1;
- (_Bool)checkListId:(long long)arg1 level:(unsigned char)arg2;

@end
