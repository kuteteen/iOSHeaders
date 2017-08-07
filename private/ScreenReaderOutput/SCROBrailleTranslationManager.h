//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSRecursiveLock;
@protocol SCROBrailleTranslatorProtocol;

@interface SCROBrailleTranslationManager : NSObject
{
    NSRecursiveLock *_contentLock;
    id <SCROBrailleTranslatorProtocol> _translator;
    NSBundle *_translatorBundle;
    _Bool _tableSupportsContractedBraille;
    _Bool _tableSupportsEightDotBraille;
    id <SCROBrailleTranslatorProtocol> _auxTranslator;
    NSBundle *_auxTranslatorBundle;
    _Bool _auxTableSupportsContractedBraille;
    _Bool _auxTableSupportsEightDotBraille;
    id <SCROBrailleTranslatorProtocol> _nemethTranslator;
    _Bool _alwaysUsesNemethCodeForTechnicalText;
}

+ (id)sharedManager;
@property(nonatomic) _Bool alwaysUsesNemethCodeForTechnicalText; // @synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText;
@property(readonly, nonatomic) _Bool auxiliaryTableSupportsEightDotBraille; // @synthesize auxiliaryTableSupportsEightDotBraille=_auxTableSupportsEightDotBraille;
@property(readonly, nonatomic) _Bool auxiliaryTableSupportsContractedBraille; // @synthesize auxiliaryTableSupportsContractedBraille=_auxTableSupportsContractedBraille;
@property(readonly, nonatomic) _Bool primaryTableSupportsEightDotBraille; // @synthesize primaryTableSupportsEightDotBraille=_tableSupportsEightDotBraille;
@property(readonly, nonatomic) _Bool primaryTableSupportsContractedBraille; // @synthesize primaryTableSupportsContractedBraille=_tableSupportsContractedBraille;
- (void).cxx_destruct;
- (_Bool)primaryTableSupportsRoundTripping;
- (_Bool)primaryAndAuxiliaryTranslatorsAreIdentical;
- (id)textForPrintBraille:(id)arg1 primaryTable:(_Bool)arg2 contracted:(_Bool)arg3 eightDot:(_Bool)arg4 locations:(id *)arg5;
- (id)textForPrintBraille:(id)arg1 contracted:(_Bool)arg2 eightDot:(_Bool)arg3 locations:(id *)arg4;
- (id)_printBrailleForText:(id)arg1 primaryTable:(_Bool)arg2 contracted:(_Bool)arg3 eightDot:(_Bool)arg4 locations:(id *)arg5 isTechnical:(_Bool)arg6 textPositionsRange:(struct _NSRange)arg7;
- (id)printBrailleForTechnicalText:(id)arg1 primaryTable:(_Bool)arg2 locations:(id *)arg3;
- (id)printBrailleForText:(id)arg1 primaryTable:(_Bool)arg2 contracted:(_Bool)arg3 eightDot:(_Bool)arg4 locations:(id *)arg5 textPositionsRange:(struct _NSRange)arg6;
- (id)printBrailleForText:(id)arg1 primaryTable:(_Bool)arg2 contracted:(_Bool)arg3 eightDot:(_Bool)arg4 locations:(id *)arg5;
- (id)printBrailleForText:(id)arg1 contracted:(_Bool)arg2 eightDot:(_Bool)arg3 locations:(id *)arg4;
- (id)auxiliaryTableIdentifier;
- (void)setAuxiliaryTranslationTableWithTableIdentifier:(id)arg1;
- (id)_loadTableIdentifier:(id)arg1 bundle:(id *)arg2 existingBundle:(id)arg3 existingTranslator:(id)arg4;
- (id)primaryTableIdentifier;
- (void)setPrimaryTranslationTableWithTableIdentifier:(id)arg1;
- (void)unlockAuxiliaryTable;
- (void)lockAuxiliaryTable;
- (id)init;

@end

