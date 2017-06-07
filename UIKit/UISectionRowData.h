//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableIndexSet, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying>
{
    _Bool _valid;
    double _headerHeight;
    double _maxHeaderTitleWidth;
    double _footerHeight;
    double _maxFooterTitleWidth;
    double _headerOffset;
    double _footerOffset;
    unsigned long long _numRows;
    unsigned long long _arrayLength;
    float *_rowHeights;
    NSMutableIndexSet *_forcedNegativeRows;
    double *_rowOffsets;
    _Bool _estimatesHeights;
    double _sectionHeight;
    long long _headerAlignment;
    long long _footerAlignment;
    UITableViewRowData *_rowData;
    _Bool _sectionOffsetValid;
    double _sectionOffset;
    long long _sectionRowOffset;
}

- (void).cxx_destruct;
- (double)defaultSectionFooterHeight;
- (double)defaultSectionHeaderHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_rowForPoint:(struct CGPoint)arg1 extraHitSpaceBetweenRows:(double)arg2;
- (long long)_rowForPoint:(struct CGPoint)arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3 extraHitSpaceBetweenRows:(double)arg4;
- (int)sectionLocationForReorderedRow:(long long)arg1;
- (int)sectionLocationForRow:(long long)arg1;
- (double)offsetForRow:(long long)arg1;
- (double)_offsetForFirstRow;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4;
- (void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(_Bool)arg3;
- (void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(_Bool)arg3;
- (void)setHeight:(double)arg1 forRow:(long long)arg2 inSection:(long long)arg3;
- (void)addOffset:(double)arg1 fromRow:(long long)arg2;
- (double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(_Bool)arg4 stripPaddingForAbuttingView:(_Bool)arg5 isTopHeader:(_Bool)arg6;
- (void)invalidateSectionOffset;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRowData:(id)arg1;

@end

