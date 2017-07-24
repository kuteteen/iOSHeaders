//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying>
{
    unsigned short _index;
    NSUUID *_originIdentifier;
}

@property(readonly, nonatomic) unsigned short index; // @synthesize index=_index;
@property(readonly, nonatomic) NSUUID *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2;

@end
