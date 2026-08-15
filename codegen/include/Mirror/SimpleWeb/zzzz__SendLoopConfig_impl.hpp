#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SendLoopConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SendLoopConfig_def.hpp"
inline void Mirror::SimpleWeb::SendLoopConfig::setStaticF_batchSend(bool  value)  {
::cordl_internals::setStaticField<bool, "batchSend", ::Mirror::SimpleWeb::SendLoopConfig*>(std::forward<bool>(value));
}
inline bool Mirror::SimpleWeb::SendLoopConfig::getStaticF_batchSend()  {
return ::cordl_internals::getStaticField<bool, "batchSend", ::Mirror::SimpleWeb::SendLoopConfig*>();
}
inline void Mirror::SimpleWeb::SendLoopConfig::setStaticF_sleepBeforeSend(bool  value)  {
::cordl_internals::setStaticField<bool, "sleepBeforeSend", ::Mirror::SimpleWeb::SendLoopConfig*>(std::forward<bool>(value));
}
inline bool Mirror::SimpleWeb::SendLoopConfig::getStaticF_sleepBeforeSend()  {
return ::cordl_internals::getStaticField<bool, "sleepBeforeSend", ::Mirror::SimpleWeb::SendLoopConfig*>();
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SendLoopConfig::SendLoopConfig()   {
}
