//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceSectionItemView, MKPlaceSectionView;

@protocol MKPlaceSectionViewDelegate <NSObject>
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectFooter:(MKPlaceSectionItemView *)arg2;
- (void)sectionView:(MKPlaceSectionView *)arg1 didDeselectRow:(MKPlaceSectionItemView *)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectRow:(MKPlaceSectionItemView *)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectHeader:(MKPlaceSectionItemView *)arg2;
@end

