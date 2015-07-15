/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:29 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AutoTouch/AutoTouch-Structs.h>
@class NSMutableArray, PSTGridLayoutSection, NSArray;

@interface PSTGridLayoutRow : NSObject {

	NSMutableArray* _items;
	char _isValid;
	int _verticalAlignement;
	int _horizontalAlignement;
	char _complete;
	char _fixedItemSize;
	PSTGridLayoutSection* _section;
	int _index;
	int _itemCount;
	CGSize _rowSize;
	CGRect _rowFrame;

}

@property (assign,nonatomic) PSTGridLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * items;                             //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                              //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                             //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) int index;                                   //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char complete;                               //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) char fixedItemSize;                          //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) int itemCount;                               //@synthesize itemCount=_itemCount - In the implementation block
-(id)itemRects;
-(id)layoutRowAndGenerateRectArray:(char)arg1 ;
-(void)setItemCount:(int)arg1 ;
-(int)itemCount;
-(id)init;
-(id)description;
-(void)invalidate;
-(id)snapshot;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(PSTGridLayoutSection *)section;
-(int)index;
-(void)addItem:(id)arg1 ;
-(CGSize)rowSize;
-(void)setRowSize:(CGSize)arg1 ;
-(char)fixedItemSize;
-(void)setFixedItemSize:(char)arg1 ;
-(CGRect)rowFrame;
-(void)setSection:(PSTGridLayoutSection *)arg1 ;
-(void)setComplete:(char)arg1 ;
-(void)layoutRow;
-(void)setRowFrame:(CGRect)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(char)complete;
-(void)setIndex:(int)arg1 ;
@end

