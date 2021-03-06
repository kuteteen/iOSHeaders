//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSWPAdornments : NSObject
{
    vector_06e666a8 _charIndexes;
    vector_8d85e9cb _glyphs;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> _positions;
    struct vector<CGRect, std::__1::allocator<CGRect>> _rects;
    struct vector<TSWPAttachmentPosition, std::__1::allocator<TSWPAttachmentPosition>> _attachmentPositions;
    _Bool _shouldRotate;
    int _type;
    int _location;
    double _ascent;
    double _descent;
    double _advance;
    struct CGColor *_color;
    struct __CTFont *_font;
    double _verticalAdjustment;
    struct CGPoint _textPosition;
}

@property(nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(nonatomic) struct CGPoint textPosition; // @synthesize textPosition=_textPosition;
@property(nonatomic) double verticalAdjustment; // @synthesize verticalAdjustment=_verticalAdjustment;
@property(nonatomic) int location; // @synthesize location=_location;
@property(retain, nonatomic) struct __CTFont *font; // @synthesize font=_font;
@property(retain, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double advance; // @synthesize advance=_advance;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)incrementCharIndexes:(long long)arg1 startingAt:(unsigned long long)arg2;
- (void)removeAdornmentAt:(unsigned long long)arg1;
- (void)addAdornmentWithAttachmentPosition:(CDStruct_316206b0)arg1;
- (void)addAdornmentWithCharIndex:(unsigned long long)arg1 point:(struct CGPoint)arg2 glyph:(unsigned short)arg3 rect:(struct CGRect)arg4;
- (void)addAdornmentWithPoint:(struct CGPoint)arg1 glyph:(unsigned short)arg2;
- (void)setAscent:(double)arg1 descent:(double)arg2 advance:(double)arg3;
@property(readonly, nonatomic) CDStruct_316206b0 *attachmentPositions;
@property(readonly, nonatomic) unsigned long long attachmentPositionCount;
@property(readonly, nonatomic) struct CGRect *rects;
@property(readonly, nonatomic) unsigned long long rectCount;
@property(readonly, nonatomic) struct CGPoint *positions;
@property(readonly, nonatomic) unsigned long long positionCount;
@property(readonly, nonatomic) unsigned short *glyphs;
@property(readonly, nonatomic) unsigned long long glyphCount;
@property(readonly, nonatomic) unsigned long long *charIndexes;
@property(readonly, nonatomic) unsigned long long charIndexCount;
- (id)initWithType:(int)arg1 color:(struct CGColor *)arg2 font:(struct __CTFont *)arg3;

@end

