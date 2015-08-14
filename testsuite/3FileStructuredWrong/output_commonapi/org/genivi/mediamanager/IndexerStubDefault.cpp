/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#include <org/genivi/mediamanager/IndexerStubDefault.h>

namespace org {
namespace genivi {
namespace mediamanager {

IndexerStubDefault::IndexerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Indexer::getInterfaceVersion()) {
}

const CommonAPI::Version& IndexerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

IndexerStubRemoteEvent* IndexerStubDefault::initStubAdapter(const std::shared_ptr<IndexerStubAdapter>& stubAdapter) {
    CommonAPI::Stub<IndexerStubAdapter, IndexerStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}





IndexerStubDefault::RemoteEventHandler::RemoteEventHandler(IndexerStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace mediamanager
} // namespace genivi
} // namespace org