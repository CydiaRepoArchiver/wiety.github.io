/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:29 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AutoTouch/AutoTouch-Structs.h>
#import <AutoTouch/PSTCollectionViewLayout.h>

@class PSTGridLayoutInfo, NSMutableDictionary, NSDictionary;

@interface PSTCollectionViewFlowLayout : PSTCollectionViewLayout {

	struct {
		unsigned delegateSizeForItem : 1;
		unsigned delegateReferenceSizeForHeader : 1;
		unsigned delegateReferenceSizeForFooter : 1;
		unsigned delegateInsetForSection : 1;
		unsigned delegateInteritemSpacingForSection : 1;
		unsigned delegateLineSpacingForSection : 1;
		unsigned delegateAlignmentOptions : 1;
		unsigned keepDelegateInfoWhileInvalidating : 1;
		unsigned keepAllDataWhileInvalidating : 1;
		unsigned layoutDataIsValid : 1;
		unsigned delegateInfoIsValid : 1;
	}  _gridLayoutFlags;
	float _interitemSpacing;
	float _lineSpacing;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	CGSize _footerReferenceSize;
	UIEdgeInsets _sectionInset;
	PSTGridLayoutInfo* _data;
	CGSize _currentLayoutSize;
	NSMutableDictionary* _insertedItemsAttributesDict;
	NSMutableDictionary* _insertedSectionHeadersAttributesDict;
	NSMutableDictionary* _insertedSectionFootersAttributesDict;
	NSMutableDictionary* _deletedItemsAttributesDict;
	NSMutableDictionary* _deletedSectionHeadersAttributesDict;
	NSMutableDictionary* _deletedSectionFootersAttributesDict;
	int _scrollDirection;
	NSDictionary* _rowAlignmentsOptionsDictionary;
	CGRect _visibleBounds;
	char filler[200];

}

@property (assign,nonatomic) float minimumLineSpacing;                        //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) float minimumInteritemSpacing;                   //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                 //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) int scrollDirection;                             //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) CGSize headerReferenceSize;                      //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize footerReferenceSize;                      //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                       //@synthesize sectionInset=_sectionInset - In the implementation block
@property (nonatomic,retain) NSDictionary * rowAlignmentOptions;              //@synthesize rowAlignmentsOptionsDictionary=_rowAlignmentsOptionsDictionary - In the implementation block
-(void)fetchItemsInfo;
-(void)getSizingInfos;
-(void)updateItemsLayout;
-(id)layoutAttributesForDecorationViewWithReuseIdentifier:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScrollDirection:(int)arg1 ;
-(void)setMinimumInteritemSpacing:(float)arg1 ;
-(void)setMinimumLineSpacing:(float)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGSize)itemSize;
-(NSDictionary *)rowAlignmentOptions;
-(int)scrollDirection;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(float)minimumLineSpacing;
-(float)minimumInteritemSpacing;
-(CGSize)headerReferenceSize;
-(CGSize)footerReferenceSize;
-(UIEdgeInsets)sectionInset;
-(void)setRowAlignmentOptions:(NSDictionary *)arg1 ;
-(void)commonInit;
@end

