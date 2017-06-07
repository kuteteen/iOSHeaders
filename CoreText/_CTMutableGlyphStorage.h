//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreText/_CTGlyphStorage.h>

#import <CoreText/_CTGlyphStorageAdvanceLookup-Protocol.h>

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup>
{
    CTGlyphStorageInterface *_interface;
    _Bool _implementsOrigins;
}

@property(readonly, nonatomic) _Bool implementsOrigins; // @synthesize implementsOrigins=_implementsOrigins;
- (void)disposeGlyphStack;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)sync;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (struct CGPoint)originAtIndex:(long long)arg1;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (struct CGSize)customAdvanceForIndex:(long long)arg1;
- (void *)refCon;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (id)initWithInterface:(id)arg1;

@end

