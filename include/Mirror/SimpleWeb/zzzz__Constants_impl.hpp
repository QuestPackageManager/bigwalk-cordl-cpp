#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Constants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__Constants_def.hpp"
inline void Mirror::SimpleWeb::Constants::setStaticF_HandshakeGUIDLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "HandshakeGUIDLength", ::Mirror::SimpleWeb::Constants*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::SimpleWeb::Constants::getStaticF_HandshakeGUIDLength()  {
return ::cordl_internals::getStaticField<int32_t, "HandshakeGUIDLength", ::Mirror::SimpleWeb::Constants*>();
}
inline void Mirror::SimpleWeb::Constants::setStaticF_HandshakeGUIDBytes(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "HandshakeGUIDBytes", ::Mirror::SimpleWeb::Constants*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mirror::SimpleWeb::Constants::getStaticF_HandshakeGUIDBytes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "HandshakeGUIDBytes", ::Mirror::SimpleWeb::Constants*>();
}
inline void Mirror::SimpleWeb::Constants::setStaticF_endOfHandshake(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "endOfHandshake", ::Mirror::SimpleWeb::Constants*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mirror::SimpleWeb::Constants::getStaticF_endOfHandshake()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "endOfHandshake", ::Mirror::SimpleWeb::Constants*>();
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Constants::Constants()   {
}
