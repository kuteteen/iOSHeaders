//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _floating;
    _Bool _extendsTopContent;
    _Bool _exists;
    double _interactiveTransitionProgress;
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(nonatomic) _Bool extendsTopContent; // @synthesize extendsTopContent=_extendsTopContent;
@property(nonatomic) double interactiveTransitionProgress; // @synthesize interactiveTransitionProgress=_interactiveTransitionProgress;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

