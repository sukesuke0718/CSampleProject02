#include "FileException.h"

FileException::FileException(const char* error) :
	m_error(error)
{
}

// �G���[�̏󋵂��o�͂���֐�
const char* FileException::What() const{
	return	m_error.c_str();
}

OpenFileException::OpenFileException(const char* filename) :
	FileException("�t�@�C�����J���܂���ł���")
{

	m_error += "\n�t�@�C�����F";
	m_error += filename;
}

ReadFileEception::ReadFileEception() :
	FileException("�t�@�C������ǂݍ��߂܂���ł���")
{
}