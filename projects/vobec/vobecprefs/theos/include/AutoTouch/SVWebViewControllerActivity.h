/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:30 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSURL, NSString;

@interface SVWebViewControllerActivity : UIActivity {

	NSURL* _URLToOpen;
	NSString* _schemePrefix;

}

@property (nonatomic,retain) NSURL * URLToOpen;                    //@synthesize URLToOpen=_URLToOpen - In the implementation block
@property (nonatomic,retain) NSString * schemePrefix;              //@synthesize schemePrefix=_schemePrefix - In the implementation block
-(void)setURLToOpen:(NSURL *)arg1 ;
-(void)setSchemePrefix:(NSString *)arg1 ;
-(NSString *)schemePrefix;
-(NSURL *)URLToOpen;
-(id)activityType;
-(id)activityImage;
-(void)prepareWithActivityItems:(id)arg1 ;
@end

