#ifndef SHAREMEMORY_H
#define SHAREMEMORY_H
#include "ServerShareMemory.h"

class NodeSHMInfo
{
public:
	int status;
	int seckeyID;
	char clientID[12];
	char serverID[12];
	char seckey[128];
};

class SecKeyShm : public ShareMemory
{
public:
	SecKeyShm(int key);
	SecKeyShm(int key, int maxNode);
	SecKeyShm(const char *pathName);
	SecKeyShm(const char *pathName, int maxNode);
	~SecKeyShm();

	int shmWrite(NodeSHMInfo *pNodeInfo);
	int shmRead(const char *clientID, const char *serverID, NodeSHMInfo *pNodeInfo);

private:
	int m_maxNode;
};

#endif