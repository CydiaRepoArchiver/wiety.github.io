/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:29 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AutoTouch/AutoTouch-Structs.h>
@class NSMutableArray, NSDictionary, NSArray;

@interface PSTGridLayoutInfo : NSObject {

	NSMutableArray* _sections;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	char _isValid;
	char _usesFloatingHeaderFooter;
	char _horizontal;
	char _leftToRight;
	NSDictionary* _rowAlignmentOptions;
	float _dimension;
	CGSize _contentSize;

}

@property (nonatomic,retain) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSDictionary * rowAlignmentOptions;              //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) char usesFloatingHeaderFooter;                   //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) float dimension;                                 //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) char horizontal;                                 //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) char leftToRight;                                //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
-(id)init;
-(id)description;
-(id)snapshot;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)invalidate:(char)arg1 ;
-(char)horizontal;
-(NSDictionary *)rowAlignmentOptions;
-(float)dimension;
-(id)addSection;
-(void)setRowAlignmentOptions:(NSDictionary *)arg1 ;
-(void)setDimension:(float)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(char)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(char)arg1 ;
-(char)leftToRight;
-(void)setLeftToRight:(char)arg1 ;
@end

