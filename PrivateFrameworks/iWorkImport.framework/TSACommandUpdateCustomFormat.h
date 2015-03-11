/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSUCustomFormatWrapper;

@interface TSACommandUpdateCustomFormat : TSKCommand {
    TSUCustomFormatWrapper *_customFormat;
    unsigned int _customFormatID;
    TSUCustomFormatWrapper *_oldCustomFormat;
}

@property(copy) TSUCustomFormatWrapper * customFormat;
@property unsigned int customFormatID;
@property(copy) TSUCustomFormatWrapper * oldCustomFormat;

- (void)commit;
- (id)customFormat;
- (unsigned int)customFormatID;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 customFormat:(id)arg2 customFormatID:(unsigned int)arg3;
- (void)loadFromArchive:(const struct UpdateCustomFormatCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct CustomFormatArchive {} *x4; struct CustomFormatArchive {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)oldCustomFormat;
- (id)p_documentRoot;
- (void)p_updateCustomFormat:(id)arg1;
- (BOOL)process;
- (void)redo;
- (void)saveToArchive:(struct UpdateCustomFormatCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct CustomFormatArchive {} *x4; struct CustomFormatArchive {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCustomFormat:(id)arg1;
- (void)setCustomFormatID:(unsigned int)arg1;
- (void)setOldCustomFormat:(id)arg1;
- (void)undo;

@end