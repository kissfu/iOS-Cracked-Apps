//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMID3Wrapper : NSObject
{
}

+ (id)getDjProgramBaseID3WithFilePath:(id)arg1;
+ (id)getSongBaseID3WithFilePath:(id)arg1;
+ (id)infoFromComment:(id)arg1;
+ (id)commentStringForProgram:(id)arg1;
+ (id)commentStringForSong:(id)arg1;
+ (id)formatProgramComment:(id)arg1;
+ (void)writeID3ForProgramSongInChildThread:(id)arg1 filePath:(id)arg2;
+ (void)writeID3ForProgram:(id)arg1 filePath:(id)arg2;
+ (id)formatMusicCommentJson:(id)arg1;
+ (void)writeID3ForSongInChildThread:(id)arg1 filePath:(id)arg2;
+ (void)writeID3ForSong:(id)arg1 filePath:(id)arg2;

@end

