//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _forbidden;
    _Bool _precise;
    _Bool _prefersFullSizePreview;
    unsigned long long _operation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool prefersFullSizePreview; // @synthesize prefersFullSizePreview=_prefersFullSizePreview;
@property(nonatomic) _Bool precise; // @synthesize precise=_precise;
@property(nonatomic) _Bool forbidden; // @synthesize forbidden=_forbidden;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

