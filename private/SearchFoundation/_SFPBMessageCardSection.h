//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBMessageCardSection.h"

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBMessageCardSection : PBCodable <_SFPBMessageCardSection, NSSecureCoding>
{
    CDStruct_bb96dcf2 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    int _separatorStyle;
    int _messageStatus;
    int _messageServiceType;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_messageText;
}

@property(nonatomic) int messageServiceType; // @synthesize messageServiceType=_messageServiceType;
@property(nonatomic) int messageStatus; // @synthesize messageStatus=_messageStatus;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasMessageServiceType;
@property(readonly, nonatomic) _Bool hasMessageStatus;
@property(readonly, nonatomic) _Bool hasMessageText;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

