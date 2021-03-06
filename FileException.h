#ifndef FILEEXCEPTION_H_
#define FILEEXCEPTION_H_

#include "Exception.h"
#include <string>

class FileException:
	public Exception
{

public:
	FileException(const char* error);
	virtual const char* What() const;	// エラーの状況を出力する関数

protected:
	std::string m_error;	// エラーメッセージ

};

class OpenFileException :
	public FileException
{

public:
	OpenFileException(const char* filename);
};


class ReadFileEception :
	public FileException
{
public:
	ReadFileEception();
};

#endif // FILEEXCEPTION_H_