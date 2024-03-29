#pragma once
#include "CodecFactory.h"
#include "ClientRespondCodec.h"

class RespondFactory : public CodecFactory
{
public:
	RespondFactory();
	RespondFactory(RespondMsg *msg);
	~RespondFactory();

	Codec *createCodec();

private:
	bool m_flag;
	RespondMsg *m_respond;
};
