/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:29 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSTCollectionViewDelegate;
@class PSTCollectionViewLayout, NSDictionary, NSIndexPath;

@interface PSTCollectionViewExt : NSObject {

	id<PSTCollectionViewDelegate> _collectionViewDelegate;
	PSTCollectionViewLayout* _nibLayout;
	NSDictionary* _nibCellsExternalObjects;
	NSDictionary* _supplementaryViewsExternalObjects;
	NSIndexPath* _touchingIndexPath;
	NSIndexPath* _currentIndexPath;

}

@property (assign,nonatomic) id<PSTCollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (nonatomic,retain) PSTCollectionViewLayout * nibLayout;                               //@synthesize nibLayout=_nibLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * nibCellsExternalObjects;                            //@synthesize nibCellsExternalObjects=_nibCellsExternalObjects - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryViewsExternalObjects;                  //@synthesize supplementaryViewsExternalObjects=_supplementaryViewsExternalObjects - In the implementation block
@property (nonatomic,retain) NSIndexPath * touchingIndexPath;                                   //@synthesize touchingIndexPath=_touchingIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                    //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
-(id<PSTCollectionViewDelegate>)collectionViewDelegate;
-(void)setCollectionViewDelegate:(id<PSTCollectionViewDelegate>)arg1 ;
-(PSTCollectionViewLayout *)nibLayout;
-(void)setNibLayout:(PSTCollectionViewLayout *)arg1 ;
-(NSDictionary *)nibCellsExternalObjects;
-(void)setNibCellsExternalObjects:(NSDictionary *)arg1 ;
-(NSDictionary *)supplementaryViewsExternalObjects;
-(void)setSupplementaryViewsExternalObjects:(NSDictionary *)arg1 ;
-(NSIndexPath *)touchingIndexPath;
-(void)setTouchingIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
@end

