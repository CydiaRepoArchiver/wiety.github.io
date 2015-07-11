/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:26 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AutoTouch/AutoTouch-Structs.h>
@interface ASIDataCompressor : NSObject {

	char streamReady;
	z_stream_s* zStream;

}

@property (readonly) char streamReady; 
+(id)deflateErrorWithCode:(int)arg1 ;
+(id)compressor;
+(id)compressData:(id)arg1 error:(id*)arg2 ;
+(char)compressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id*)arg3 ;
-(id)setupStream;
-(id)compressBytes:(char*)arg1 length:(unsigned)arg2 error:(id*)arg3 shouldFinish:(char)arg4 ;
-(char)streamReady;
-(void)dealloc;
-(id)closeStream;
@end

