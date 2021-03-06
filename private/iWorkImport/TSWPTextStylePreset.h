//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKModel.h"
#import "TSSPreset.h"

@class NSString, TSWPListStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSWPTextStylePreset : TSPObject <TSSPreset, TSKModel>
{
    NSString *_presetIdentifier;
    TSWPParagraphStyle *_paragraphStyle;
    TSWPListStyle *_listStyle;
}

@property(retain, nonatomic) TSWPListStyle *listStyle; // @synthesize listStyle=_listStyle;
@property(retain, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(copy, nonatomic) NSString *presetIdentifier; // @synthesize presetIdentifier=_presetIdentifier;
- (void).cxx_destruct;
- (id)referencedStyles;
@property(readonly, nonatomic) NSString *presetKind;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TextStylePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct TextStylePresetArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithContext:(id)arg1 presetIdentifier:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

