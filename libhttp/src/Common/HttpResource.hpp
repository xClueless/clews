#ifndef HTTP_RESOURCE_HPP
#define HTTP_RESOURCE_HPP

#include <string>
#include <map>
#include <clews/mime/MimeDB.hpp>
#include <clews/mime/MimeType.hpp>
#include <clews/core/CoreObject.hpp>

class HttpResource : public CoreObject
{
private:
	std::string mURL;
	std::string mContent;

	MimeDB& mMimeDB;
	MimeType mMimeType;

public:
	HttpResource(std::string url, MimeDB& mimeDB);
	std::string Content();
	uint32_t ContentLength();
	MimeType Mime();
	virtual uint32_t Load();
	void ReplaceTokens(std::map<std::string, std::string> tokenMap);
};

#endif

