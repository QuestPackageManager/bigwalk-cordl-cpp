#pragma once
// IWYU pragma private; include "Rewired/Utils/SystemInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__SystemInfo_def.hpp"
inline void Rewired::Utils::SystemInfo::setStaticF_is64Bit(bool  value)  {
::cordl_internals::setStaticField<bool, "is64Bit", ::Rewired::Utils::SystemInfo*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::SystemInfo::getStaticF_is64Bit()  {
return ::cordl_internals::getStaticField<bool, "is64Bit", ::Rewired::Utils::SystemInfo*>();
}
// Ctor Parameters []
constexpr ::Rewired::Utils::SystemInfo::SystemInfo()   {
}
