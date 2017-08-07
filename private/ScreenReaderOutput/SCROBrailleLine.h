//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableAttributedString, SCROBrailleChunk, SCROBrailleLineVirtualStatus;
@protocol SCROBrailleDriverProtocol;

@interface SCROBrailleLine : NSObject
{
    id <SCROBrailleDriverProtocol> _brailleDriver;
    long long _size;
    long long _statusSize;
    long long _insetSize;
    long long _lineOffset;
    long long _leftInset;
    long long _rightInset;
    long long _masterStatusCellIndex;
    long long _iBeamLocation;
    long long _focusLocation;
    struct _NSRange _selectionRange;
    int _displayMode;
    int _lineFocus;
    _Bool _displayEnabled;
    _Bool _needsDisplayFlush;
    _Bool _needsStatusFlush;
    _Bool _needsFocusFlush;
    _Bool _blink;
    _Bool _currentUnread;
    _Bool _anyUnread;
    _Bool _isPanning;
    _Bool _showDotsSevenAndEight;
    _Bool _brailleChunksAreDirty;
    char *_displayBuffer;
    char *_mainCellsBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    long long _firstToken;
    long long _lastToken;
    SCROBrailleLineVirtualStatus *_virtualStatus;
    _Bool _wordWrapEnabled;
    _Bool _isKeyboardHelpOn;
    unsigned long long _generationID;
    SCROBrailleChunk *_editingChunk;
    SCROBrailleChunk *_chunkPendingTranslation;
    NSArray *_chunkArray;
    NSDictionary *_chunkDictionary;
    NSDictionary *_pendingBrailleStringDictionary;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *pendingBrailleStringDictionary; // @synthesize pendingBrailleStringDictionary=_pendingBrailleStringDictionary;
@property(retain, nonatomic) NSDictionary *chunkDictionary; // @synthesize chunkDictionary=_chunkDictionary;
@property(retain, nonatomic) NSArray *chunkArray; // @synthesize chunkArray=_chunkArray;
@property(nonatomic) __weak SCROBrailleChunk *chunkPendingTranslation; // @synthesize chunkPendingTranslation=_chunkPendingTranslation;
@property(nonatomic) __weak SCROBrailleChunk *editingChunk; // @synthesize editingChunk=_editingChunk;
@property(nonatomic) unsigned long long generationID; // @synthesize generationID=_generationID;
@property(nonatomic) _Bool isKeyboardHelpOn; // @synthesize isKeyboardHelpOn=_isKeyboardHelpOn;
@property(nonatomic) _Bool wordWrapEnabled; // @synthesize wordWrapEnabled=_wordWrapEnabled;
@property(nonatomic) long long lineOffset; // @synthesize lineOffset=_lineOffset;
@property(nonatomic) _Bool displayEnabled; // @synthesize displayEnabled=_displayEnabled;
@property(readonly, nonatomic) _Bool needsDisplayFlush; // @synthesize needsDisplayFlush=_needsDisplayFlush;
- (void).cxx_destruct;
- (id)_chunkBeforeEditingChunkInEnumerator:(id)arg1;
- (id)_chunkAfterEditingChunk;
- (id)_chunkBeforeEditingChunk;
- (void)_didMoveToChunk:(id)arg1;
- (_Bool)_moveToBrailleIndex:(unsigned long long)arg1;
- (id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out _Bool *)arg2;
- (id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out _Bool *)arg2;
- (id)_dotDescriptionForBrailleString:(id)arg1;
- (id)_spokenStringForBrailleString:(id)arg1 isDelete:(_Bool)arg2 speakLiterally:(out _Bool *)arg3;
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;
- (id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 contracted:(_Bool)arg3;
- (id)_translatedTextInIsolationForBraille:(id)arg1 contracted:(_Bool)arg2;
- (_Bool)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (id)_chunkAtLineBufferIndex:(unsigned long long)arg1;
- (unsigned long long)_chunkIndexForLineBufferIndex:(unsigned long long)arg1;
- (_Bool)moveCursorToRouterIndex:(unsigned long long)arg1 didLeaveEditingContext:(out _Bool *)arg2 forwardToScreenReader:(out _Bool *)arg3;
- (_Bool)moveCursorRight;
- (_Bool)moveCursorLeft;
- (_Bool)forwardDeleteAtCursorShouldTranslate:(out _Bool *)arg1;
- (_Bool)deleteAtCursorShouldTranslate:(out _Bool *)arg1 deletedText:(id *)arg2;
- (void)discardEdits;
- (unsigned long long)_cursorOffset;
- (unsigned long long)textCursorIndex;
- (unsigned long long)_lengthPrecedingChunkPendingTranslation;
- (id)translatedTextForBraille:(out id *)arg1 replacingTextInRange:(out struct _NSRange *)arg2 cursor:(out unsigned long long *)arg3;
@property(readonly, nonatomic) _Bool shouldTranslateNow;
@property(readonly, nonatomic) _Bool wantsEdits;
@property(readonly, nonatomic) _Bool hasEdits;
- (id)description;
- (unsigned long long)bufferIndexForRouterIndex:(unsigned long long)arg1;
- (void)addAttributedPaddingToLineBuffer:(id)arg1 chunkWithIndex:(unsigned long long)arg2;
- (void)addAttributedStringToLineBuffer:(id)arg1 fromChunkWithIndex:(unsigned long long)arg2 brailleOffset:(unsigned long long)arg3;
- (void)_flush;
- (void)_flushRealStatus;
- (_Bool)display;
- (_Bool)_setMainCells:(const char *)arg1 length:(long long)arg2;
- (_Bool)_blink:(_Bool)arg1;
- (void)blinker;
- (long long)locationForIndex:(long long)arg1;
- (struct _NSRange)textRangeForBrailleRange:(struct _NSRange)arg1;
- (long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2;
- (long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (int)lineFocus;
- (void)setLineFocus:(int)arg1;
- (_Bool)showDotsSevenAndEight;
- (void)setShowDotsSevenAndEight:(_Bool)arg1;
- (id)newLineDescriptor;
- (long long)tokenForRouterIndex:(long long *)arg1 location:(long long *)arg2 appToken:(id *)arg3;
- (_Bool)getStatusRouterIndex:(long long *)arg1 forRawIndex:(long long)arg2;
- (long long)lastToken;
- (long long)firstToken;
- (void)setFormatter:(id)arg1;
- (_Bool)anyUnread;
- (void)setAnyUnread:(_Bool)arg1;
- (_Bool)currentUnread;
- (void)setCurrentUnread:(_Bool)arg1;
- (_Bool)panRight;
- (_Bool)canPanRight;
- (_Bool)panLeft;
- (_Bool)canPanLeft;
- (void)_updateOffsets;
- (_Bool)_allowInset;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (void)setRealStatus:(id)arg1;
- (long long)masterStatusCellIndex;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setStatusSize:(long long)arg1;
- (void)setMainSize:(long long)arg1;
- (id)appToken;
- (void)setAppToken:(id)arg1;
- (void)dealloc;
- (id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3;

@end

