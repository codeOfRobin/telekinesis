#import <Cocoa/Cocoa.h>

typedef struct {
    short kchrID;
    Str255 KCHRname;
    short transtable[256];
} Ascii2KeyCodeTable;

enum {
    kTableCountOffset = 256+2,
    kFirstTableOffset = 256+4,
    kTableSize = 128
};

@interface QSKeyCodeTranslator : NSObject {
}
+(OSStatus)InitAscii2KeyCodeTable;
+(short)AsciiToKeyCode:(short)asciiCode;
+(short)keyCodeForCharacter:(NSString *)character;
@end
