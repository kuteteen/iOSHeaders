//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class BLTPBAutoBugCapturePayloadSectionInfoDoesNotExist, BLTPBAutoBugCapturePayloadSendFail;

@interface BLTPBAutoBugCapturePayload : PBCodable <NSCopying>
{
    BLTPBAutoBugCapturePayloadSectionInfoDoesNotExist *_sectionInfoDoesNotExist;
    BLTPBAutoBugCapturePayloadSendFail *_sendFailInfo;
}

@property(retain, nonatomic) BLTPBAutoBugCapturePayloadSectionInfoDoesNotExist *sectionInfoDoesNotExist; // @synthesize sectionInfoDoesNotExist=_sectionInfoDoesNotExist;
@property(retain, nonatomic) BLTPBAutoBugCapturePayloadSendFail *sendFailInfo; // @synthesize sendFailInfo=_sendFailInfo;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSectionInfoDoesNotExist;
@property(readonly, nonatomic) _Bool hasSendFailInfo;

@end

