//
//  RDFileTableController.h
//  PDFViewer
//
//  Created by Radaee on 12-10-29.
//  Copyright (c) 2012年 __Radaee__. All rights reserved.


#import <UIKit/UIKit.h>
#import "RDPDFViewController.h"
#import "RDUPassWord.h"
#import "sys/utsname.h"
#import "RDPDFReflowViewController.h"
#import "PDFHttpStream.h"
@interface PDFFileStream : NSObject<PDFStream>
{
    FILE *m_file;
    bool m_writable;
}
-(bool)writeable;
-(int)read: (void *)buf :(int)len;
-(int)write:(const void *)buf :(int)len;
-(unsigned long long)position;
-(unsigned long long)length;
-(bool)seek:(unsigned long long)pos;
@end

@interface RDFileTableController : UITableViewController <UIApplicationDelegate>
{
    RDPDFViewController *m_pdf;
    RDPDFReflowViewController *m_pdfR;
    NSMutableArray *m_files;
    CGImageRef m_img;

    NSFileHandle *fileHandle;
    void *buffer;
    PDFHttpStream *httpStream;

}
@end




