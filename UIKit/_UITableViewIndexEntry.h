//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UITableViewIndexEntry : NSObject
{
    UIImage *_image;
    id _line;
    struct CGPoint _baselinePoint;
    struct CGRect _bounds;
    struct CGRect _typeBounds;
}

@property(nonatomic) struct CGPoint baselinePoint; // @synthesize baselinePoint=_baselinePoint;
@property(nonatomic) struct CGRect typeBounds; // @synthesize typeBounds=_typeBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) id line; // @synthesize line=_line;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)description;

@end

